#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--){
		string s;
		cin>>s;
		int n = s.length();
		int h=0, z=0;
		int i=0;
		while (i<n){
			if (s[i]==')' || s[i]=='_'){
				i++;
			}
			else {
				if (s[i]=='('){
					i++;
					while (1){
						int dem=0;
						while (s[i]!=')' && s[i]!='_' && s[i]!='(' && i<n) i++, dem++;
						if (dem>0) h++;
						if (s[i]==')') break;
						i++;
					}
				}
				else {
					int dem=0;
					while (s[i]!='_' && s[i]!='(' && s[i]!=')' && i<n) i++, dem++;
					if (dem>z) z=dem;
				}
			}
		}
		cout<<z<<" "<<h<<"\n";
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/P176PROF/
