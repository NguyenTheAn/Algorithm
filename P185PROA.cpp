#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
		char s[1000];
		cin>>s;
		int n=strlen(s);
		for (int j=0; j<n; j++){
			if (j!=0 || s[0]!='9'){
				if ('9'-s[j] < s[j]-'0'){
					s[j]='9'-s[j]+'0';
				}
			}
		}
		for (int j=0; j<n; j++){
			cout<<s[j];
		}
		cout<<endl;
	}
	return 0;
}
//http://www.spoj.com/ACMPTIT/problems/P185PROA/
