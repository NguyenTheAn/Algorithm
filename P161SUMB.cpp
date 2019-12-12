#include<iostream>
#include <math.h>
using namespace std;
int UCLN(int a, int b){
	while (1){
		int du=a%b;
		a=b;
		b=du;
		if (du==0) break;
	}
	if (a<0) return -a;
	return a;
}

int main()
{
	int n, m;
	cin>>n>>m;
	int a[100000], b[100000];
	for (int i=0; i<=n; i++){
		cin>>a[i];
	}
	for (int i=0; i<=m; i++){
		cin>>b[i];
	}
	if (n<m){
		cout<<"0/1";
		return 0;
	}
	if (n>m){
		if (a[0]*b[0]>0) cout<<"Infinity";
		else cout<<"-Infinity";
	}
	if (n==m){
		int ucln=UCLN(a[0], b[0]);
		if (a[0]*b[0]>0 ) {
			if (a[0]<0) cout<<-a[0]/ucln<<"/"<<-b[0]/ucln;
			else cout<<a[0]/ucln<<"/"<<b[0]/ucln;
		}
		else {
			if (a[0]<0) cout<<a[0]/ucln<<"/"<<b[0]/ucln;
			else  cout<<-a[0]/ucln<<"/"<<-b[0]/ucln;
		}
	}
	return 0;
} 
//http://www.spoj.com/PTIT/problems/P161SUMB/
