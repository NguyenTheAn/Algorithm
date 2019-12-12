#include<bits/stdc++.h>
using namespace std;

long long sum[100000];

int main(){
	int n, m;
	cin>>n>>m;
	int a[100000];
	for (int i=0; i<n; i++){
		cin>>a[i];
		if (a[i]%m==0){
			cout<<"Yes";
			return 0;
		}
		if (i==0) sum[i]=a[i];
		else sum[i] = sum[i-1]+a[i];
	}
	for (int i=0; i<n; i++){
		if (sum[i]%m==0){
			cout<<"Yes";
			return 0;
		}
	}
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n-1; j++){
			if ((sum[j]-a[i])%m==0){
				cout<<"Yes";
				return 0;
			}
		}
	}
	cout<<"No";
	return 0;
}

//https://www.spoj.com/PTIT/problems/P186SUMA/
