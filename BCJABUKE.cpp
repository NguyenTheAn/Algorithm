#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	int j, d=0;
	cin>>j;
	int l=1, r=m;
	while (j--){
		int x;
		cin>>x;
		if (x<l){
			d+=(l-x);
			l=x;
			r=x+m-1;
		}
		else if (x>r) {
			d+=(x-r);
			r=x;
			l=r-m+1;
		}
	}
	cout<<d;
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCJABUKE/
