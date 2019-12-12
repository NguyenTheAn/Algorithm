#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
bool check(int a[], int n){
	for (int i=0; i<n-1; i++){
		if (a[i] != a[i+1]){
			return 0;
		}
	}
	return 1;
}
int abs(int a, int b){
	return a > b ? a - b : b - a;
}
void strcpy(int a[], int b[], int n){
	for (int i=0; i<n; i++){
		a[i] = b[i];
	}
}

int main() {
	int Case = 0;
	while (1){
		Case++;
		bool t = 0;
		int a[100], b[100], n;
		cin>>n;
		if (!n) break;
		for (int i=0; i<n; i++){
			cin>>a[i];
		}
		if (check(a, n)) {
			cout<<"Case "<<Case<<": 0 iterations\n";
			continue;
		}
		for (int i=0; i<1000; i++){
			for (int j=0; j<n; j++){
				b[j] = abs(a[j], a[j+1]);
				if (j == n-1){
					b[j] = abs(a[j], a[0]);
				}
			}
			strcpy(a, b, n);
			t = check(a, n);
			if (t){
				cout<<"Case "<<Case<<": "<<i+1<<" iterations\n";
				break;
			}
		}
		if (!t){
			cout<<"Case "<<Case<<": not attained\n";
		}
	}
} 
//http://www.spoj.com/PTIT/problems/PTIT123B/
