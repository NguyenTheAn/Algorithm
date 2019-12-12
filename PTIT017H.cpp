#include <bits/stdc++.h>
using namespace std;
 
long long Sum(long long n){
	long long d=0;
	for (int i=1; i<=sqrt(n); i++){
		if (n%i==0){
			d+=i;
			if (i!=n/i) d+=(n/i);
		}
	}
	return d;
}

int main (){
	int t;
	cin>>t;
	while (t--){
		long long n;
		cin>>n;
		if (Sum(Sum(n)) == 2*n) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT017H/
