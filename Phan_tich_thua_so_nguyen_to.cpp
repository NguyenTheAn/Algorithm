#include <iostream>
#include <math.h>
using namespace std;
bool so_nguyen_to(unsigned long);

int main()
{
	unsigned long n;
	int i=1;
	cin>>n;
	while (n!=1){
		int dem=0;
		i++;
		while(n%i==0){
			n/=i;
			dem++;	
		}
	if (dem>0)
		cout<<i<<" "<<dem<<endl;
	if (so_nguyen_to(n)==true){
		cout<<n<<" 1";
		break;
		}
	}
}

bool so_nguyen_to(unsigned long n){
   		if (n<2)
   		return false;
   	if (n>=2){
   	for (int i=2;i<=sqrt(n);i++){
   		if (n%i==0){
   			return false;
		   }
		}
	}
	return true;
}
