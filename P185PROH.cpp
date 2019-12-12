#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	char a[100000];
	bool dd[100000];
	for (int i=0; i<100000; i++) {
		dd[i]=0;
	}
	cin>>a;
	for (int i=0, j=n-1; i<j; i++, j--) {
		if (a[i]<a[j]) {
			a[i]=a[j];
			dd[i]=1;
			k--;
		}
		if (a[i]>a[j]) {
			a[j]=a[i];
			dd[j]=1;
			k--;
		}
	}
	if (k<0) {
		cout<<"-1";
	}
	if (k==0) {
		cout<<a;
	}
	if (k>0) {
		for (int i=0, j=n-1; i<j; i++, j--) {
			if (a[i]=='9') continue;
			if (dd[i]==0) k--;
			if (dd[j]==0) k--;
			if (k<0) {
				break;
			}
			else {
				if (k==0) {
					a[i]='9';
					a[j]='9';
					break;
				}
				else {
					a[i]='9';
					a[j]='9';
				}
			}
		}
		if (k>0){
			if (n%2==1){
				a[n/2]='9';
				k--;
			}
		}
		cout<<a;
	}
	return 0;
}
//http://www.spoj.com/ACMPTIT/problems/P185PROH/
