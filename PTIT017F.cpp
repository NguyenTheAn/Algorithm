#include <bits/stdc++.h>
using namespace std;

int sumNum(string s){
	int n = s.length();
	int d=0;
	for (int i=0; i<n; i++) d+=(s[i]-'0');
	return d;
}


int main() {
	int t;
	cin>>t;
	while (t--){
		string s;
		cin>>s;
		int n = s.length();
		
		if (n<2) {
			if (s[0]=='0') cout<<"YES\n";
			else cout<<"NO\n";
			continue;
		}
		int sum = sumNum(s);
		int num = (s[n-2]-'0')*10+(s[n-1]-'0');
		if (sum%9==0 && num%4==0) cout<<"YES\n";
		else cout<<"NO\n";
		
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT017F/
