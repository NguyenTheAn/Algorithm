#include<bits/stdc++.h>
using namespace std;

int dd[10];

int main(){
	char a[100005];
	char s[100005];
	cin>>a;
	cin>>s;
	int n=strlen(a);
	int m=strlen(s);
	for (int i=0; i<m; i++){
		dd[s[i]-'0']++;
	}
	for (int i=0; i<n; i++){
		for (int j=9; j>a[i]-'0'; j--){
			if (dd[j]!=0){
				a[i]=j+'0'; 
				dd[j]--;
			} 
		}
	}
	cout<<a;
	return 0;
}
//http://www.spoj.com/PTIT/problems/REPSTR/
