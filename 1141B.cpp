#include <bits/stdc++.h>
using namespace std;

int dd[200001];

int main(){
	int n;
	cin>>n;
	bool a[200001];
	for (int i=1; i<=n; i++) cin>>a[i];
	int res = -1;
	for (int i=1; i<=n; i++){
		if (a[i]) {
			dd[i] = dd[i-1] + 1;
		} 
	}
	for (int i=1; i<=n; i++) {
		res = max(dd[i], res);
	}
	for (int i=1; i<=n; i++){
		if (!dd[i]) {
			res = max(res, dd[i-1] + dd[n]);
			break;
		}
	}
	cout<<res;
	return 0;
}

//https://codeforces.com/contest/1141/problem/B
