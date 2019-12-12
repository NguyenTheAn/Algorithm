#include <iostream>
#include <string.h>
using namespace std;
long long DQ(long long a, long long b){
	a%=1000000007;
	if (b==0) return 1;
	if (b%2==0){
		long long p=DQ(a, b/2);
		return (p*p)%1000000007;
	}
	else {
		long long p=DQ(a, b-1);
		return (p*a)%1000000007;
	}
}

main()
{
	long long a, b;
	while (1){
		cin>>a>>b;
		if (a==0 && b==0){
			break;
		}
		cout<<DQ(a, b)<<endl;
	}
}
//http://www.spoj.com/PTIT/problems/P144PROC/
