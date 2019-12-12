#include <bits/stdc++.h>
using namespace std;

int n, S;
int a[100];
int dd[100];
int bestconfig=100;

void Try(int i){
	for (int j=0; j<=1; j++){
		dd[i]=j;
		if (i==n-1){
			int tmp=0, d=0;
			for (int j=0; j<n; j++){
				if (dd[j]==1) {
					tmp+=a[j];
					d++;
				}
			}
			if (tmp==S && d<bestconfig) bestconfig=d;
		}
		else Try(i+1);
	}
}

int main (){
	cin>>n>>S;
	for (int i=0; i<n; i++) cin>>a[i];
	Try(0);
	if (bestconfig==100) cout<<"-1";
	else cout<<bestconfig;
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCATM/
