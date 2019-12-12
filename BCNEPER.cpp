#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
void swap(char &a, char &b){
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
void sap_xep(char a[], int n, int k){
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
bool check(char a[], int n){
	for (int i=0; i<n; i++){
		if (a[i]<a[i+1]) return false;
	}
	return true;
}
void sinh_hoan_vi(char a[], int n){
	int i,j;
	for ( i = n; i >= 0; i--){
		if (a[i] > a[i-1]) break;
	}
	for ( j = n-1; j >= 0; j--){
		if (a[j] > a[i-1]) break;
	}
	swap (a[i-1], a[j]);
	sort(a+i, a+i+n);
}

int main()
{
	char a[100000];
	int t, stt;
	cin>>t;
	for (int k=0; k<t; k++){
		cin>>stt>>a;
		int n=strlen(a);
		if (check(a, n)){
			cout<<stt<<" "<<"BIGGEST\n";
			continue;
		}
		sinh_hoan_vi(a, n);
		cout<<stt<<" ";
		puts(a);
	}
}
//http://www.spoj.com/PTIT/problems/BCNEPER/
