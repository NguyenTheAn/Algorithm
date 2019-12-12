#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	int d=0;
	int n = s.length();
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (s[i]==s[j]){
				for (int k=0; k<n; k++){
					for (int l=k+1; l<n; l++){
						if (s[k]==s[l] && s[k]!=s[i]){
							if (i<k && k<j && j<l) d++;
						}
					}
				}
			}
		}
	}
	cout<<d;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P187PROD/
