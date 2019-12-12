#include <bits/stdc++.h>

using namespace std;

long long nt[10000001];

void sangNT(){
	long long tmp = sqrt(10000000);
	for (long long i=2; i<= tmp; i++){
		if (nt[i]==0){
			for (long long j=i*i; j<10000000; j+=i){
				nt[j]=i;
			}
		}
	}
}

int main(){
	long long n;
	cin>>n;
	sangNT();
	long long tong=0;
	for (long long i=0; i<n; i++){
		long long a;
		cin>>a;
		if (a<2) continue;
		while (1){
			if (nt[a]==0){
				tong+=a;
				break;
			}
			else {
				tong+=nt[a];
				a/=nt[a];
			}
		}
	}
	cout<<tong;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P187PROB/
