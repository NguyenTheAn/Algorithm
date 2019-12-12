#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[101];
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
	if (posMax < posMin){
		cout<<posMax - posMin + n - 1;
	}
	if (posMax > posMin){
		cout<<posMax - posMin - 2 + n;
	}
	return 0;
}
//https://www.spoj.com/ACMPTIT/problems/P194PROB/
