#include <bits/stdc++.h>
using namespace std;


int main() {
	int n, x, y, a[100000];
	int d=0;
	cin>>n>>x>>y;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	if (x>y){
		cout<<n;
		return 0;
	}
	for (int i=0; i<n; i++){
		if (a[i]<=x) d++;
	}
	if (d%2){
		cout<<d/2+1;
	}
	else cout<<d/2;
	return 0;
}
//https://codeforces.com/contest/1102/problem/C
