#include <iostream>
using namespace std;
 
int main()
{
	int n;
	bool check=true;
	long long a[100000];
	long long tong_dau=0, kq=0, kq1=0;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>> a[i];
	}
	for (int i=0; i<n; i++){
		if(a[i]>0){
			check= false;
			break;
		} 	
	}
	if (check) {
		max=a[0];
		for (int j=0; j<n; j++){
			if (max<a[j]) max=a[j];
		}
		cout<<max<<" "<<max;
		return 0;
	}
	// thuat toan kadane
	for (int i=0; i<n; i++){
		tong_dau+=a[i];
		if (tong_dau<0) tong_dau=0;
		else if (tong_dau>kq) kq=tong_dau;
	}
	for (int i=0; i<n; i++){
		if (a[i]>0) kq1+=a[i];
	}
	cout<<kq<<" "<<kq1;
	return 0;
}


