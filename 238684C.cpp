#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		string a, b;
		cin>>n;
		cin>>a>>b;
		long long sum = 1;
		for (int i=0; i<n; i++){
			if (a[i]=='1' && b[i]=='1') sum*=2, sum%=1000000007;
			if (a[i]=='1' && b[i]=='0') sum=0;
		}
		if (!sum) cout<<"IMPOSSIBLE\n";
		else cout<<sum<<endl;
	}
	return 0;
}
//https://codeforces.com/gym/238684/problem/C
