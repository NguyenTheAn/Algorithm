#include <bits/stdc++.h>
using namespace std;

long long n, d=0;
long long a[1000000];

int main() {
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	long long min = a[0];
	for (int i=1; i<n; i++) {
		if (a[i]<min ) min=a[i];
	}
	for (int i=0; i<n; i++){
		a[i]-=min;
	}
	if (min!=0) d++;
	for (int i=0; i<n; i++){
		min=LONG_MAX;
		for (int i=0; i<n; i++){
			if (a[i]==0){
				bool check = 0;
				for (int j=i-1; j>=0; j--){
					if (a[j]==0) break;
					a[j]-=min;
					check = 1;
				}
				if (check && min!=0) d++;
				min = LONG_MAX;
			}
			else{
				min = a[i]>min ? min : a[i];
				if (i==n-1){
					bool check = 0;
					for (int j=i; j>=0; j--){
						if (a[j]==0) break;
						a[j]-=min;
						check = 1;
					}
					if (check && min!=0) d++;
				}
			}
		}
	}
	cout<<d;
	return 0;
}
//https://www.spoj.com/ACMPTIT/problems/P184SUMD/
