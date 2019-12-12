#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
	string s;
	cin>>s;
	int n=s.length();
	bool check;
	for (int i=0; i<n; i++){
		if (s[i]=='A') check=0;
		if (s[i]=='P') check=1;
	}
	int h;
	for (int i=0; i<n; i++){
		if (s[i]==':'){
			h=(s[i-2]-'0')*10+(s[i-1]-'0');
			break;
		}
	}
	if (check){
		h+=12;
	}
	if (!check && h==12) h=0; 
//	cout<<h;
	for (int i=0; i<n; i++){
		if (s[i]==':'){
			if (h==24) h=12;
			if (h<10) cout<<0<<h;
			else cout<<h;
			for (int j=i; j<n; j++){
				if (s[j]=='A' || s[j]=='P') break;
				cout<<s[j];
			}
			break;
		}
	}
	return 0;
}
//http://www.spoj.com/ACMPTIT/problems/P182PROH/
