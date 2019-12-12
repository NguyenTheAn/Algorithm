#include <iostream>
using namespace std;
main()
{
	long long n,k;
	cin>>n>>k;
	long long ssl;
	if (n%2==0) ssl=n/2;
	else ssl=n/2+1;
	if (k<=ssl) cout<<k*2-1;
	else cout<<(k-ssl)*2;
}
//http://www.spoj.com/PTIT/problems/P153PROG/
