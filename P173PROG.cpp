#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i=1; i<=t; i++){
		char s[1000];
		cin>>s;
		if (next_permutation(s, s+strlen(s))){
			cout<<s<<"\n";
		}
		else cout<<"BIGGEST\n";
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/P173PROG/
