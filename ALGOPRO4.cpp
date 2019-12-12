#include<iostream>
#include <string.h>
using namespace std;
int oct(string s){
	if (s=="000") return 0;
	if (s=="001") return 1;
	if (s=="010") return 2;
	if (s=="011") return 3;
	if (s=="100") return 4;
	if (s=="101") return 5;
	if (s=="110") return 6;
	if (s=="111") return 7;
}

int main()
{
	string s, ss;
	cin>>s;
	ss="000";
	int n=s.length();
	while (n%3!=0){
		s= '0' + s;
		n++;
	}
	for (int i=0,j=0; i<n; i++){
		ss[j]=s[i];
		j++;
		if (j==3){
			cout<<oct(ss);
			j=0;
		}
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/ALGOPRO4/
