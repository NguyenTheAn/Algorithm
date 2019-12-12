#include <iostream>
#include <math.h>
using namespace std;
main()
{
	unsigned long long n;
	cin>>n;
	if (n==0) cout<<"1";
	if(n%4==0) cout<<"6";
	if (n%4==1) cout<<"8";
	if (n%4==3) cout<<"2";
	if (n%4==2) cout<<"4";
}
