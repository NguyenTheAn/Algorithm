#include<bits/stdc++.h>
using namespace std;

#define Max 2000001

int M;
int dd[10000000];
int Pow[10000000];

void sangnt(){
	for (int i=2; i*i<=Max; i++){
		for (int j=i*i; j<=Max; j+=i){
			if (!dd[j]){
				dd[j]=i;
			}
		}
	}
}

void ptich(int n){
	while (n!=0){
		if (dd[n]==0){
			Pow[n]++;
			break;
		}
		Pow[dd[n]]++;
		n/=dd[n];
	}
}


int main(){
	sangnt();
	int n, k;
	cin>>n>>k>>M;
	for (int i=0; i<k; i++){
		int a;
		cin>>a;
		n-=a;
	}
	if (n<0) cout<<"0";
	else {
		for (int i=n+k-1; i>=n+1; i--) ptich(i);
		for (int i=k-1; i>1; i--){
			int tmp = i;
			while (tmp!=0){
				if (dd[tmp]==0){
					Pow[tmp]--;
					break;
				}
				Pow[dd[tmp]]--;
				tmp/=dd[tmp];
			}
		}
		long long kq=1;
		for (int i=2; i<Max; i++){
			if (Pow[i]){
				for (int j=0; j<Pow[i]; j++){
					kq*=i;
					kq%=M;
				}
			}
		}
		cout<<kq;
	}
	return 0;
}

//https://www.spoj.com/PTIT/problems/PTIT016G/
