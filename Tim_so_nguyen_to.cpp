#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for (int i=0; i<n; i++){
   	unsigned long n;
   	bool x=true;
   	cin>>n;
   	if (n<2)
   		cout<<"no";
   	if (n>=2){
   	for (int i=2;i<=sqrt(n);i++){
   		if (n%i==0){
		   	cout<<"no"<<endl;
		   	x=false;
		   	break;
		   }
		}
	}
	if ((x==true))
	cout<<"yes"<<endl;
	}
	return (0);
}
