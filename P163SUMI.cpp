#include <bits/stdc++.h>
using namespace std;

string s="";

void convert(int n){
	if (n==0) return ;
	char du = n%10+'0';
	convert(n/10);
	s+=du;
}

int main(){

	for (int i=1; i<=10000; i++){
		convert(i);
	}
	int n;
	cin>>n;
	cout<<s[n-1]-'0';
	return 0;
}
//https://www.spoj.com/PTIT/problems/P163SUMI/
