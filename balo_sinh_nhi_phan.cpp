#include <iostream>
#include <string.h>

using namespace std;

void sinh(int a[], int n){
	int i=n-1;
	for ( ; i>= 0; i--){
		if (a[i]==0){
			a[i]=1;
			break;
		}
	}
	for (int j=i+1; j<n; j++){
		a[j]=0;
	}
}
bool check(int a[], int n){
	for (int i=0; i<n; i++){
		if (a[i]==0) return 0;
	}
	return 1;
}
bool dk1(int a[], int w[], int n, int m){
	int temp=0;
	for (int i=0; i<n; i++){
		temp += a[i] * w[i] ;
	}
	return temp <= m;
}
int cost(int a[], int v[], int n){
	int gtri=0;
	for (int i=0; i<n; i++){
		gtri += a[i] * v[i];
	}
	return gtri;
}
int max(int a[], int w[], int v[], int n, int m){
	int max=0;
	while (!check(a, n)){
		sinh(a, n);
		if (!dk1(a, w, n, m)) continue;
		int t = cost(a, v, n);
		if (t > max) max=t;
	}
	return max;
}

int main()
{
	int n, m, w[101], v[101], a[101];
	cin>>n>>m;
	memset(a, 0, sizeof a);
	for (int i=0; i<n; i++){
		cin>>w[i]>>v[i];
	}
	cout<<max(a, w, v, n, m);
}
