#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int a[100][100];
bool dd[100];
int T[100];
int X[100];
int n;
int bestconfig=INT_MAX;

int Try(int i){
	for (int j=2; j<=n; j++){
		if (dd[j]==0){
			X[i]=j;
			T[i]=T[i-1]+a[X[i-1]][j];
			if (T[i]<bestconfig){
				dd[j]=1;
				if (i==n) {
					if (T[n] + a[X[n]][1] < bestconfig){
						bestconfig=T[n]+a[X[n]][1];
					}
				}
				else Try(i+1);
			}
			dd[j]=0;
		}
	}
	return bestconfig;
}

int main(){
	cin>>n;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	dd[1]=1;
	T[1]=0;
	X[1]=1;
	cout<<Try(2);
	return 0;
}
//http://vn.spoj.com/PTIT/problems/BCTSP/
