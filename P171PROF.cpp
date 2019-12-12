#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,t=0,k=0;
	cin>>n;
	int a[n+5];
	for (int i=0 ; i<n ; i++)
		cin>>a[i];
	sort(a,a+n);
	for (int i=0 ; i<n ; i++){
		if (a[i]>=k){
			t++;
			k+=a[i];
		}
	}
	cout<<t;
}
//https://www.spoj.com/PTIT/problems/P171PROF/
