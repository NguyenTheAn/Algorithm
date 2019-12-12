
#include <iostream>
//#include <bits/stdc++.h>
#include <math.h>
using namespace std;
bool so_nguyen_to(unsigned long long);
 
main()
{
	unsigned long long n;
	cin>>n;
	unsigned long long tmp=sqrt(n);
	if (tmp*tmp==n && so_nguyen_to(tmp)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
 
bool so_nguyen_to(unsigned long long n){
   	bool x=true;
   		if (n<2)
   		x=false;
   	if (n>=2){
   	for (int i=2;i<=sqrt(n);i++){
   		if (n%i==0){
		   	x=false;
		   	break;
		   }
		}
	}
	return (x);
}
  
