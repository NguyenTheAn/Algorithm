#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[201];
	for (int i=0; i<n; i++) cin>>a[i];
	int Max = INT_MIN;
	int posMax = 0;
	int Min = INT_MAX;
	int posMin = 0;
	for (int i=0; i<n; i++){
		if (a[i]<=Min) {
			Min = a[i];
			posMin = i;
		}
		if (a[i]>Max){
			Max = a[i];
			posMax = i;
		}
	}
	if (Max == Min){
		cout<<0;
		return 0;
	}
	int res = 0;
	if (posMax < posMin){
		res = (n-1) - posMax > posMin ? (n-1) - posMax : posMin;
	}
	if (posMax > posMin){
		res = (n-1) - posMin > posMax ? (n-1) - posMin : posMax;
	}
	cout<<res;
	return 0;
}

//https://www.spoj.com/PTIT/problems/P194PROD/
