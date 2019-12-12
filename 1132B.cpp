#include <bits/stdc++.h>
using namespace std;

int a[300001];
int q[300001];

int main(){
	int n;
	cin>>n;
	for ( int i=0; i < n; i++ ) cin>>a[i];
	int m;
	cin>>m;
	for (int i=0; i<m; i++) cin>>q[i];
	sort(a, a+n);
	long long sum = 0;
	for (int i=0; i<n; i++){
		sum+=a[i];
	}
	for (int i=0; i<m; i++){
		cout<<sum - a[n-q[i]]<<endl;
	}
	return 0;
}
//https://codeforces.com/contest/1132/problem/B
