#include <bits/stdc++.h>
using namespace std;

int DP[50001][27];

int main(){
//	freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
	string s;
	cin>>s;
	s = '.' + s;
	int n = s.length();
	for (int i=1; i<n; i++){
		for (int j = 0; j < 26; j++) DP[i][j] = DP[i-1][j];
		DP[i][s[i] - 'a']++;
	}
	int q;
	cin >> q;
	while (q--){
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		bool flag = 0;
		for (int i=0; i<26; i++){
			if (DP[b][i] - DP[a-1][i] != DP[d][i] - DP[c-1][i]){
				flag = 1;
				break;
			}
		}
		if (flag) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}

//https://www.spoj.com/PTIT/problems/P18QPROF/
