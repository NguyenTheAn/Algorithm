#include <bits/stdc++.h>

using namespace std;

int n1;
int n2;

void Similar(string s1, string s2, int &r, int &c){
	for (int i=0; i<n1; i++){
		for (int j=0; j<n2; j++){
			if (s1[i]==s2[j]){
				r = j;
				c = i;
				return ;
			}
		}
	}
}

int main(){
	string s1, s2;
	cin>>s1>>s2;
	int r, c;
	n1 = s1.length();
	n2 = s2.length();
	Similar(s1, s2, r, c);
	for (int i=0; i<n2; i++){
		if (i==r){
			cout<<s1<<endl; 
			continue;
		}
		for (int j=0; j<n1; j++){
			if (j==c) cout<<s2[i];
			else cout<<'.';
		}
		cout<<endl;
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT126I/
