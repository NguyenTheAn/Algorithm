#include <bits/stdc++.h>
using namespace std;

bool dd[100000];

int main() {
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	int dp=0, sp=0;
	for (int i=0, j=n-1; i<j; i++, j--){
		if (s[i]!=s[j]){
			dp++;
		}
		else sp++;
	}
	if (dp>k || k>2*(dp+sp)+n%2){
		cout<<"No";
		return 0;
	}
	k-=dp;
	if (k%2==1){
		if (k>2*sp) k-=(2*sp);
		else k=1;
		if (k>(dp + n%2)) {
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}
//https://www.spoj.com/PTIT/problems/P175SUMA/
