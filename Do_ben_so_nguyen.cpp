#include <iostream>
using namespace std;
unsigned long long tich_cac_chu_so(unsigned long long );
int main()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		int dem=0;
		unsigned long long x;
		cin>>x;
		if (x<10){
			cout<<"0\n";
			return 0;
		}
		while (1){
			x=tich_cac_chu_so(x);
			dem++;
			if (x<10 ){
			x=0;
			break;
			}
		}
	cout<<x+dem<<endl;
	}
	return 0;
}

unsigned long long tich_cac_chu_so(unsigned long long x){
	unsigned long long tich=1;
	while(x!=0){
		tich*=x%10;
		x/=10;
	}
	return (tich);
}
