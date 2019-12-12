#include <iostream>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	for (int i=0; i<t; i++){
		long long n;
		cin>>n;
		long long x=0;
		long long du=0;
		while (1){
			x++;
            du=du*10 + 1;
            if (du>=n){
                du=du%n;
            }
            if(du==0) break;
  		}
		cout<<x<<endl;
	}
	return 0;
}

