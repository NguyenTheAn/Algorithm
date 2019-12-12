#include <bits/stdc++.h>
using namespace std;

int dd[100000];

int main(){
	int n, a[130];
	cin>>n;
	int y=0, x;
	for (int i=0; i<n; i++){
		cin>>x;
		dd[x]++;
		y = max(x, y);
	}
	x=0;
	for (int i=1; i<=10000; i++){
		if(dd[i] && y%i==0) dd[i]--;
		if (dd[i]) x=max(x, i);
	}
	cout<<x<<" "<<y;
	return 0;
}
//https://codeforces.com/contest/1108/problem/B
