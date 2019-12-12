#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

long long mod(long long n, long long m, long long k){
	if (m==1) return n%k;
	if (m==0 || n==0) return 0;
	n%=k;
	if (m%2==0){
		long long tmp = mod(n, m/2, k);
		return ((tmp%k)*2)%k;
	}
	else{
		long long tmp = mod(n, m-1, k);
		return ((tmp%k)+n)%k;
	}
}

long long handled(long long n, long long m, long long k){
	if (n<2) return 1%k;
	if (m==0) return 1%k;
	if (m==1) return n%k;
	n%=k;
	if (m%2==0){
		long long tmp = handled(n, m/2, k);
		if (LLONG_MAX/tmp<=tmp) tmp=mod(tmp, tmp, k);
		else return ((tmp%k)*(tmp%k))%k;
	}
	else{
		long long tmp = handled(n, m-1, k);
		if (LLONG_MAX/tmp<=tmp) tmp=mod(tmp, n, k);
		else return ((tmp%k)*n)%k;
	} 
}

int main()
{
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
		long long n, m, k;
		cin>>n>>m>>k;
		cout<<handled(n, m, k)<<endl;
	}
	return 0;
}

