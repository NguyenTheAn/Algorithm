#include <bits/stdc++.h>

using namespace std;

int n;
long long in[1000][1000], kq=0, d=0;
int dd[1001];

void Try(int i){
	d++;
	dd[i]=d;
	if (d==n) return ;
	long long min = LONG_MAX;
	int imin=0;
	for (int j=0; j<n; j++){
		if (dd[j]==0 && in[i][j]<min){
			min = in[i][j];
			imin = j;
		}
	}
	kq += min;
	Try(imin);
}

int main(){
	cin>>n;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin>>in[i][j];
	}
	Try(0);
	for (int i=0; i<n; i++){
		if (dd[i]==n){
			cout<<kq + in[0][i];
		}
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCTSP2/
