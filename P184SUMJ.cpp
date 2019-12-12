#include <bits/stdc++.h>
using namespace std;

long long mod(long long n, long long m, long long k){
	if (n==0 || m==0) return 0;
	if (m%2==0) return (2*mod(n, m/2, k) % k)%k;
	else return (mod(n, m-1, k) % k + n)%k;
}

long long handled(long long n, long long m, long long k){
	if (m==0) return 1%k;
	long long tmp = handled(n, m/2, k)%k;
	long long p = mod(tmp, tmp, k)%k;
	if (m%2!=0) return mod(p, n, k) %k;
	return p;
}

int main()
{
	long long n, m, k;
	cin>>n>>m>>k;
	cout<<handled(n, m, k);
	return 0;
}
//https://www.spoj.com/ACMPTIT/problems/P184SUMJ/
