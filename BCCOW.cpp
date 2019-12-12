#include <bits/stdc++.h>
using namespace std;

int n, C;
bool bin[16];
int bestconfig=0;
int a[20];

void Try(int i){
	for (int j=0; j<=1; j++){
		bin[i]=j;
		if (i==n-1){
			int d=0;
			for (int j=0; j<n; j++){
				if (bin[j]==1) d+=a[j];
			}
			if (d>bestconfig && d<=C) {
				bestconfig=d;
			}
		}
		else Try(i+1);
	}
}

int main(){
	cin>>C>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	Try(0);
	cout<<bestconfig;
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCCOW/
