#include <bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		long long a[10][10];
		int p[10];
		for (int i=1; i<=n; i++){
			p[i] = i;
			for (int j=1; j<=n; j++) cin>>a[i][j];
		}
		long long bestconfig = LLONG_MAX;
		do {
			long long tmp = 0;
			for (int i=1; i<=n; i++){
				tmp+=a[i][p[i]];
			}
			bestconfig = min(bestconfig, tmp);
		} while (next_permutation(p+1, p+n+1));
		cout<<bestconfig<<endl;
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT014G/
