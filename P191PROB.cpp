#include <bits/stdc++.h>
using namespace std;

int n, m, a[50001];

int main(){
	cin>>n>>m;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	int d=0;
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (a[i]+a[j]==m) d++;
		}
	}
	cout<<d;
    return 0;
}
//https://www.spoj.com/ACMPTIT/problems/P191PROB/
