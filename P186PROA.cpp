#include <bits/stdc++.h>
using namespace std;

bool dd[100000];

int Handled(int a[], int b[], int d, int n, int m, int mid){
	int count=0;
	for (int i=0; i<n*m; i++){
		if (a[i]>b[mid]) {
			if ((a[i]-b[mid])%d!=0){
				return -1;
			}
			else {
				count = count + (a[i]-b[mid])/d;
			}
		}
		if (a[i]<b[mid]){
			if ((-a[i]+b[mid])%d!=0){
				return -1;
			}
			else {
				count = count + (-a[i]+b[mid])/d;
			}
		}
	}
	return count;
}

int main(){
	int n, m, d;
	cin>>n>>m>>d;
	int a[100000];
	int b[100000];
	for (int i=0; i<n*m; i++){
		cin>>a[i];
		dd[a[i]]=1;
	}
	int len=0;
	for (int i=0; i<100000; i++){
		if (dd[i]!=0){
			b[len]=i;
			len++;
		}
	}
	if (len%2!=0) cout<<Handled(a, b, d, n, m, len/2);
	else {
		if (Handled(a, b, d, n, m, len/2)<Handled(a, b, d, n, m, len/2-1)){
			cout<<Handled(a, b, d, n, m, len/2);
		}
		else cout<<Handled(a, b, d, n, m, len/2-1);
	}
	return 0;
}
//http://www.spoj.com/ACMPTIT/problems/P186PROA/
