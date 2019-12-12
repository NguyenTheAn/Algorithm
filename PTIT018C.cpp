#include <bits/stdc++.h>
using namespace std;

long long powMod(long long a, long long b, long long m){
	a %= m;
	if (b == 0) return 1;
	if (b%2 == 0){
		long long p = powMod(a, b/2, m);
		return (p * p) % m ;
	}
	else {
		long long p = powMod(a, b-1, m);
		return (p * a) % m;
	}
}

int main(){
//	freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--){
		string a;
		long long b, m;
		cin>>a>>b>>m;
		int n = a.length();
		long long res = 0;
		for (int i=0; i<n; i++){
			res = (res * 10 + a[i] - '0') % m;
		}
		cout<<powMod(res, b, m)<<endl;
	}
	return 0;
}

//https://www.spoj.com/PTIT/problems/PTIT018C/
