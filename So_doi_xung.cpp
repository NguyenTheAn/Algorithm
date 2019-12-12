#include <iostream>
#include <math.h>
using namespace std;
main()
{
	unsigned long long n,tmp,re;	
	unsigned int idx,du;
	cin>>idx;
	for (int i=0;i<idx;i++){
		cin>>n;
		tmp=n;
		re=0;
		while (n!=0){
			du=n%10;
			re=re*10+du;
			n/=10;
		}
		if(tmp==re) cout<<"YES\n";
			else cout<<"NO\n";
	}	
}
