/* thuat toan sinh nhi phan
	chay tu cuoi ve dau tim phan tu bang 0 dau tien.
	doi 0 thanh 1
	nhung phan tu phia sau vi tri do doi thanh 0
	neu khong thay so 0 nao thi ket thuc thuat toan */
#include <iostream>
using namespace std;
bool check(int a[], int n){
	for (int i=0; i<n; i++){
		if (a[i]==0) return false;
	}
	return true;
}
void in_mang(int a[], int n){
	for (int i=0; i<n; i++){
		cout<<a[i];
	}
	cout<<endl;
}
void sinhnhiphan(int a[], int n){
	int i=n-1;
	while(i>=0){
		if (a[i]==1) i--;
		if(a[i]==0) {
			a[i]=1;
			for (int j=i+1; j<n; j++){
				a[j]=0;
			}
			in_mang(a, n);
			i=n-1;
		}
	}
}

main()
{
	int n;
	cin>>n;
	int bin[n];
	for (int i=0; i<n; i++) bin[i]=0;
	in_mang(bin, n);
	sinhnhiphan(bin, n);
}
