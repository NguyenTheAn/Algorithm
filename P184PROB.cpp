#include <bits/stdc++.h>
using namespace std;
long long x[300000];

int main(){
	int n;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>x[i];
	}
	sort(x, x+n);
	if (n%2==0){
		cout<<x[n/2-1];
	}
	else cout<<x[n/2];
//	for (int i=0; i<n; i++){
//		cout<<x[i]<<" ";
//	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/P184PROB/
