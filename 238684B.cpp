#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		string a, b;
		cin>>a>>b;
		int lena = a.length();
		int lenb = b.length();
		bool check=0;
		if (lena != lenb) {
			cout<<"No\n";
		}
		else {
			
			for (int i=0; i<lena; i++){
				if (a[i]>='A' && a[i]<='Z') a[i]+=32;
				if (b[i]>='A' && b[i]<='Z') b[i]+=32;
				if (a[i]=='p') a[i]='b';
				if (b[i]=='p') b[i]='b';
				if (a[i]=='i') a[i]='e';
				if (b[i]=='i') b[i]='e';
			}
			if (a==b) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	return 0;
}
//https://codeforces.com/gym/238684/problem/B
