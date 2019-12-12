#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n, r;
		cin>>n>>r;
		long long sum=1500;
		for (int i=0; i<n; i++){
			int a; cin>>a;
			sum+=a;
		}
		if (sum==r) cout<<"Correct\n";
		else cout<<"Bug\n";
	}
	return 0;
}
//https://codeforces.com/gym/238684/problem/A
