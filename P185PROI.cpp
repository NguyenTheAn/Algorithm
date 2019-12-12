#include <bits/stdc++.h>
using namespace std;

bool bin[10000000];

void reverse(int n){
	for (int i=0; i<n/2; i++){
		swap(bin[i], bin[n-i-1]);
	}
}

int DecToBin(long long x){
	int i=0;
	while(1){
		if (x==1) {
			bin[i++]=1;
			break;
		}
		bin[i]=x%2;
		x/=2;
		i++;
	}
	reverse(i);
	return i;
}
long long BinToDec(int n){
	long long dec=0;
	long long tmp=1;
	for (int i=0; i<n; i++){
		if (i!=0) tmp*=2;
		if (bin[n-i-1]==1) dec+=tmp;
	}
	return dec;
}

int main(){
	int t;
	cin>>t;
	for (int l=0; l<t; l++){
		long long x;
		cin>>x;
		long long kq=0;
		int n=DecToBin(x);
		int i;
		for (i=0; i<n; i++){
			long long max, min;
			if (bin[i]==0){
				break;
			}
		}
		long long max, min;
		for (int j=i; j<n; j++){
			bin[j]=1;
			for (int k=j+1; k<n; k++){
				bin[k]=1;
			}
			max=BinToDec(n);
			for (int k=j+1; k<n; k++){
				bin[k]=0;
			}
			min=BinToDec(n);
			if (min>x){
				kq=kq+max-min+1;
			}
			else{
				if (max>x) kq=kq+max-x;
			}
			bin[j]=0;
		}
		cout<<kq<<endl;
	}
	return 0;
}
//http://www.spoj.com/ACMPTIT/problems/P185PROI/
