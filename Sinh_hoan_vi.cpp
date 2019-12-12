/*  thuat toan sinh hoan vi
	duyet tu cuoi len dau
	xac dinh doan cuoi giam dan dai nhat
	tim phan tu thu a[i] bat dau doan cuoi do
	xet phan tu a[i-1], tim trong doan cuoi do phan tu nho nhat a[k] > a[i-1]
	doi vi tri a[k] va a[i-1]
	sap xep tang dan cac phan tu tu a[k] den a[n-1]
	neu ko con doan cuoi giam dan, ket thuc thuat toan */
#include <iostream>
using namespace std;
void swap(int &a, int &b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
void in_mang(int a[], int n){
	for (int i = 0; i < n; i++){
		cout<<a[i];
	}
	cout<<endl;
}
void sap_xep(int a[], int n, int k){
	for (int i=k;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]>a[j]){
				int index;
				index=a[i];
				a[i]=a[j];
				a[j]=index;
				}
			}
		}
}
bool check(int a[], int n){
	for (int i=0; i<n; i++){
		if (a[i]<a[i+1]) return false;
	}
	return true;
}
void sinh_hoan_vi(int a[], int n){
	int i,j;
	for ( i = n; i >= 0; i--){
		if (a[i] > a[i-1]) break;
	}
	for ( j = n-1; j >= 0; j--){
		if (a[j] > a[i-1]) break;
	}
	swap (a[i-1], a[j]);
	sap_xep(a, n, i);
}

int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for (int i=0; i<n; i++){
		a[i] = i+1;
	}
	a[n] = 0;
	in_mang(a, n);
	if (n != 1){
		while (true){
			sinh_hoan_vi(a, n);
			in_mang(a, n);	
			if (check(a, n) == true) break;
		}
	}
}
	
