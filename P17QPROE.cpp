#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
 
int main() {
	int n, count=0;
	cin>>n;
	int *a;
	a = new int[n];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	int i=0, j=n-1;
	while (i<j){
		if (a[i]==a[j]){
			i++, j--;
		}
		else {
			if (a[i]>a[j]){
				a[j-1]+=a[j];
				count++;
				j--;
			}
			if (a[i]<a[j]){
				a[i+1]+=a[i];
				count++;
				i++;
			}
			
		}
	}
	cout<<count;
	delete [] a;
} 
//http://www.spoj.com/PTIT/problems/P17QPROE/
