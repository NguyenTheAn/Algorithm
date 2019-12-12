#include <bits/stdc++.h>

using namespace std;


int main(){
	string s1="", s2="";
	string s;
	int n;
	int a=0, b=0;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>s;
		if (s!=s1 && s!=s2){
			if (s1=="") s1=s;
			else s2=s;
		}
		if (s1==s) a++;
		if (s2==s) b++;
	}
	if (a>b) cout<<s1;
	else cout<<s2;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P164SUMA/
