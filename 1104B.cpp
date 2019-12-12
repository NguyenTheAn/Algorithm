#include <bits/stdc++.h>
using namespace std;


int main(){
	stack <char> st;
	string s;
	cin>>s;
	int n = s.length(), d=0;
	for (int i=0; i<n; i++){
		if (!st.empty() && s[i]==st.top()){
			st.pop();
			d++;
		}
		else st.push(s[i]);
	}
	if (d%2==0){
		cout<<"NO";
	}
	else cout<<"YES";
	return 0;
}
//https://codeforces.com/contest/1104/problem/B
