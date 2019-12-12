#include<bits/stdc++.h>
using namespace std;


int main(){
	int n, m;
	int a[100];
	cin>>n>>m;
	for (int i=0; i<m; i++){
		cin>>a[i];
	}
	sort(a, a+m);
	int min=1000000;
	for (int i=0; i<m-n+1; i++){
		if (a[n-1+i]-a[i]<min) min=a[n-1+i]-a[i];
	}
	cout<<min;
	return 0;
}
//http://www.spoj.com/PTIT/problems/P155SUMI/

