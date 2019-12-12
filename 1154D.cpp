#include <bits/stdc++.h>
using namespace std;

bool s[200001];

int main(){
	ios_base::sync_with_stdio(false);
	int n, b, a;
	cin>>n>>b>>a;
	for (int i=0; i<n; i++) cin>>s[i];
	int x = b, y = a;
	for (int i=0; i<n; i++){
		if (y == a) y--;
		else {
			if (s[i]){
				if (x > 0) x--, y++;
				else y--;
			}
			else {
				if (y > 0) y--;
				else x--;
			}
		}
		if (x == 0 && y == 0){
			cout<<i+1;
			return 0;
		}
	}
	cout<<n;
	return 0;
}
//https://codeforces.com/contest/1154/problem/D
