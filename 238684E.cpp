#include <bits/stdc++.h>
using namespace std;


int main(){
	long long t;
	cin>>t;
	while (t--){
		long long n;
		cin>>n;
		long long a[10001];
		long long sum=0;
		for (long long i=0; i<n; i++){
			cin>>a[i];
			sum+=a[i];
		}
		long long tmp = a[0];
		for (long long i=0; i<n; i++){
			tmp = __gcd(tmp, a[i]);
		}
		sum/=tmp;
		cout<<tmp<<" "<<sum<<endl;
	}
	return 0;
}
//https://codeforces.com/gym/238684/problem/E
