#include <bits/stdc++.h>

using namespace std;

int Min(int b[], int n, int m){
	int a[10000];
	for (int i=0; i<m; i++) a[i]=b[i];
	int min=0;
	for (int i=m-1; i>=0; i--){
		while (a[i]!=0) {
			min += a[i]--;
			n--;
			if (n==0) return min;
		}
	}
}

int Max(int b[], int n, int m){
	int a[10000];
	for (int i=0; i<m; i++) a[i]=b[i];
	int smax=0;
	for (int i=0; i<n; i++){
		int p=0;
		for (int j=1; j<m; j++){
			if (a[j]>a[p]) p=j;
		}
		smax += a[p];
		a[p]--;
	}
	return smax;
}

int main(){
	int n, m;
	int a[10000];
	cin>>n>>m;
	for (int i=0; i<m; i++) cin>>a[i];
	sort(a, a+n, greater <int>());
	cout<<Max(a, n, m)<<" "<<Min(a, n, m);
	return 0;
}
//https://www.spoj.com/PTIT/problems/P143SUMB/
