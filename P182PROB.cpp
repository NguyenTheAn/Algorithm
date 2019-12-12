#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	cin>>n;
	long long a[100001];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	int d=1;
	sort(a, a+n);
	for (int i=0; i<n-1; i++){
		if (a[i]==a[i+1]) 
			d++;
		else break;
	}
	long long kq=1;
	if (d>=3){
		kq = (d*(d-1)/2);
		kq = (kq*(d-2))/3;
	}
	else {
		if (d==2){
			d=1;
			for (int i=2; i<n-1; i++){
				if (a[i]==a[i+1]) d++;
				else break;
			}
			kq*=d;
		} 
		else {
			d=1;
			for (int i=1; i<n-1; i++){
				if (a[i]==a[i+1]) d++;
				else {
					kq=d;
					d=1;
					for (int j=i+1; j<n-1; j++){
						if (a[j]==a[j+1]) d++;
						else break;
					}
					break;
				}
			}
			kq*=d;
		}
	}
	cout<<kq;
	return 0;
}
//http://www.spoj.com/PTIT/problems/P182PROB/
