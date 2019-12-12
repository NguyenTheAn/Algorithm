#include<iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[100000];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	int x=-1, y=-1, z=-1;
	for (int i=0; i<n; i++){
		if (a[i]!=x&&a[i]!=y&&a[i]!=z){
			if (x!=-1&&y!=-1&&z!=-1){
				cout<<"NO";
				return 0;
			}
			if (x==-1) x=a[i];
			else if (y==-1) y=a[i];
				 else if (z==-1) z=a[i];
		}
	}
//	cout<<x<<y<<z;
	if (x==-1||y==-1||z==-1){
		cout<<"YES";
	}
	else {
		if ((y>x&&y<z) || (y>z&&y<x)) {
			if (x+z==2*y) cout<<"YES";
			else cout<<"NO";
		}
		if ((x>y&&x<z) || (x>z&&x<y)) {
			if (y+z==2*x) cout<<"YES";
			else cout<<"NO";
		}
		if ((z>x&&z<y) || (z>y&&z<x)) {
			if (x+y==2*z) cout<<"YES";
			else cout<<"NO";
		}
	}
}
//http://www.spoj.com/PTIT/problems/P174PROE/
