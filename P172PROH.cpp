#include <bits/stdc++.h>
using namespace std;

string ch[]={"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

bool find(string s){
	for (int i=0; i<8; i++){
		if (s == ch[i] ) return 1;
	}
	return 0;
}

int main(){
	string s;
	cin>>s;
	int n = s.length();
	int d=0;
	for (int i=0; i<n; i++){
		string tmp = "";
		if (i<n-1){
			tmp+=s[i];
			tmp+=s[i+1];
			if (find(tmp)) {
				d++;
				i++;
				continue;
			}
			else {
				tmp="";
			}
		}
		if (i<n-2){
			tmp+=s[i];
			tmp+=s[i+1];
			tmp+=s[i+2];
			if (find(tmp)) {
				d++;
				i+=2;
				continue;
			}
			else {
				tmp="";
			}
		}
		d++;
	}
	cout<<d;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P172PROH/
