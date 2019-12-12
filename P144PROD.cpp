#include <iostream>
#include <algorithm>
using namespace std;
int maxlen(string s[], int n){
	int max = 0;
	for (int i=0; i<n; i++){
		if (s[i].length() > max) max = s[i].length();
	}
	return max;
}
void handled(string &a, string s[], int n){
	int na=a.length(), nb=maxlen(s, n), check;
	int t=nb-na;
	for (int i=0; i<t; i++){
		a = '0' + a;
	}
}

bool cmp(string a, string b){
	return a < b;
}
void display(string s){
	int n = s.length();
	bool check = 0;
	for (int i=0; i<n; i++){
		if (s[i]!='0' && !check){
			check = 1;
		}
		if (check){
			cout<<s[i];
		}
	}
	if (!check) cout<<"0";
}
bool check(string s[], int n){
	for (int i=0; i<n-1; i++){
		if (s[i]!=s[i+1]) return 0;
	}
	return 1;
}

main() {
	for (int i=1; ; i++){
		int n;
		cin>>n;
		if (n==0) break;
		string hight[50];
		for (int j=0; j<n; j++){
			cin>>hight[j];
		}
		for (int j=0; j<n; j++){
			handled(hight[j], hight, n);
		}
		sort(hight, hight+n, cmp);
		if (check(hight, n)) cout<<"Case "<<i<<": "
		<<"There is a row of trees having equal height."<<endl;
		else {
			cout<<"Case "<<i<<": ";
			display(hight[0]);
			cout<<" ";
			display(hight[n-1]);
			cout<<endl;
		}
	}
} 
//http://www.spoj.com/PTIT/problems/P144PROD/
