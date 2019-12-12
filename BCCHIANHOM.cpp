#include <bits/stdc++.h>
using namespace std;

int a[20];
int kq=0;
int n;

void Try(int i, int k, int s){
	if (i==n-1 || k==0) return;
	if (k==1){
		if (a[n-1]-a[i]==s) kq++;
		return ;
	}
	for (int j=i+1; j<n; j++){
		if (a[j]-a[i]==s) Try(j, k-1, s);
	}
}

int main() {
	int k;
	cin>>n>>k;
	cin>>a[0];
	for (int i=1; i<n; i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	if (k==1){
		cout<<"1";
		return 0;
	}
	for (int i=0; i<n; i++){
		Try(i, k-1, a[i]);
	}
	cout<<kq;
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCCHIANHOM/
