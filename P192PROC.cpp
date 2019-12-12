#include <bits/stdc++.h>
using namespace std;

int n, a[100001];
long long Dp[100001];

int main() {
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	Dp[0]=0;
	for (int i=0; i<n; i++){
		Dp[0] += a[0]*a[i];
	}
	for (int i=1; i<n; i++){
		Dp[i] = (a[i]*Dp[i-1])/a[i-1];
	}
	long long result=0;
	for (int i=0; i<n; i++){
		result += (Dp[i] - a[i]*a[i]);
	}
	cout<<result/2;
    return 0;
}
//https://www.spoj.com/ACMPTIT/problems/P192PROC/
