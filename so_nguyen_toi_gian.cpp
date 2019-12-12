#include <iostream>
using namespace std;
long tinh_tong_cac_chu_so(long long );
main()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		long long x;
		cin>>x;
		while (x>=10){
			x=tinh_tong_cac_chu_so(x);
		}
	cout<<x<<endl;
	}
}

long tinh_tong_cac_chu_so(long long x){
	long tong=0;
	while(x!=0){
		tong+=x%10;
		x/=10;
	}
	return (tong);
}
