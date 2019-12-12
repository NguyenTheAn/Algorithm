#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long a[100001];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}	
	long long max=a[0], min=a[0];
	int x=0, y=0;
	for (int i=0; i<n; i++){
		if (a[i]>max){
			max=a[i];
			x=i;
		}
		if (a[i]<min){
			min=a[i];
			y=i;
		}
	}
	if (x>y) cout<<max-min;
	else {
		long long kq1=0, kq2=0;
		long long Max=max, Min=min;
		if (y!=n-1){
			Max=min;
			for (int i=y+1; i<n; i++){
				if (a[i]>Max) 
					Max=a[i];
			}
			kq1=Max-min;
		}
		else {
			Min=max;
			for (int i=0; i<y; i++){
				if (a[i]<Min) 
					Min=a[i];
			}
			kq1=min-Min;
		}
		if (x!=0){
			Min=max;
			for (int i=0; i<x; i++){
				if (a[i]<Min) 
					Min=a[i];
			}
			kq2=max-Min;
		}
		else {
			Max=min;
			for (int i=x+1; i<n; i++){
				if (a[i]>Max) Max=a[i];
			}
			kq2=Max-max;
		}
		if (kq1>kq2) cout<<kq1;
		else cout<<kq2;
	}
	return 0;
}
//http://www.spoj.com/ACMPTIT/problems/P184PROH/
