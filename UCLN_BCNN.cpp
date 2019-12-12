#include <iostream>
#include <math.h>
using namespace std;
main()
{
	long long a,b,p;
	while (1){
		cin>>a>>b;
		if (a==0 && b==0) break;
		p=a*b;
		// thuat toan euclid
		while (b!=0) {
      		long long x = a%b;
      		a = b;
       		b = x;
   			}
		cout<<a<<" "<<p/a<<endl;
		}
	
}
