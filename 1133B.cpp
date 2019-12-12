#include <bits/stdc++.h>
using namespace std;

int a[200001];
int v[100];

int main(){
	int n, k;
	cin>>n>>k;
	for (int i=0; i<n; i++){
		cin>>a[i];
		a[i] %= k;
		v[a[i]]++;
	}
	int res = 0;
	res = v[0] / 2;
	for (int i=1; i<k; i++){
		if (v[i]){
			if (i*2 == k) res += v[i]/2;
			else {
				res += min(v[i], v[k-i]);
				v[i] = 0;
				v[k-i] = 0;
			}
		}
	}
	cout<<2*res;
	return 0;
}
//https://codeforces.com/contest/1133/problem/B
