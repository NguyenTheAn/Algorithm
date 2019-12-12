#include <bits/stdc++.h>
using namespace std;

bool check(string a, string b){
	bool c=0;
	for (int i=0; i<4; i++){
		string tmp = "";
		for (int j=0; j<4; j++){
			if (i!=j) tmp+=b[j];
		}
		if (a==tmp) return 1;
	}
	return 0;
}

int solve(string a, string b){
	int len = a.length();
	for (int i=0; i<=len-4; i++){
		string tmp="";
		for (int j=i; j<i+4; j++){
			tmp+=a[j];
		}
		if (tmp==b) return 1;
	}
	for (int i=0; i<=len-3; i++){
		string tmp="";
		for (int j=i; j<i+3; j++){
			tmp+=a[j];
		}
		if (check(tmp, b)) return -1;
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		string a, b;
		cin>>a>>b;
		int tmp = solve(a, b);
		if (tmp==1) cout<<"good\n";
		else if (tmp==-1) cout<<"almost good\n";
		else cout<<"none\n";
	}
	return 0;
}
//https://codeforces.com/gym/238684/problem/F
