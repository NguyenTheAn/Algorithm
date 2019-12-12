#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	for (int j=0; j<t; j++){
		string s;
		cin>>s;
		int n = s.length();
		int d=1;
		for (int i=0; i<n; i++){
			if (s[i] != s[i+1]){
				cout<<d<<s[i];
				d=1;
			}
			else d++;
			
		}
		cout<<endl;
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT135I/
