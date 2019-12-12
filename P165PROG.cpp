#include <bits/stdc++.h>
using namespace std;

#define BYTE "127"
#define SHORT "32767"
#define INT "2147483647"
#define LONG "9223372036854775808"

int cmp(string s1, string s2){
	int n1=s1.length();
	int n2=s2.length();
	if (n1>n2) return 1;
	if (n1<n2) return -1;
	if (n1==n2) {
		if (s1>s2) return 1;
		if (s1<s2) return -1;
		if (s1==s2) return 0;
	}
}

int main() {
	string s;
	cin>>s;
	if (s[0]=='-'){
		s.erase(0, 1);
		if (cmp(s, "128")==-1 || cmp(s, "128")==0) cout<<"byte";
		else if (cmp(s, "32768")==-1 || cmp(s, "32768")==0) cout<<"short";
		else if (cmp(s, "2147483648")==-1 || cmp(s, "2147483648")==0) cout<<"int";
		else if (cmp(s, LONG)==-1 || cmp(s, LONG)==0) cout<<"long";
		else cout<<"BigInteger";
	}
	else {
		if (cmp(s, BYTE)==-1 || cmp(s, BYTE)==0) cout<<"byte";
		else if (cmp(s, SHORT)==-1 || cmp(s, SHORT)==0) cout<<"short";
		else if (cmp(s, INT)==-1 || cmp(s, INT)==0) cout<<"int";
		else if (cmp(s, LONG)==-1 || cmp(s, LONG)==0) cout<<"long";
		else cout<<"BigInteger";
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/P165PROG/
