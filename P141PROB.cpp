#include <bits/stdc++.h>
using namespace std;

int r, c;

int count(char a[51][51], int ii=-1, int jj=-1){
	char b[51][51];
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			if (i==ii && j==jj) b[i][j]='o';
			else b[i][j]=a[i][j];
		}
	}
	int d=0;
	int x[]={1,1,-1,0,1,-1, 0, -1};
	int y[]={1,-1,1,1,0,-1, -1, 0};
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			for (int k=0; k<8; k++){
				if (i+x[k]>=0 && i+x[k]<r && j+y[k]>=0 && j+y[k]<c && b[i][j]=='o'){
					if (b[i+x[k]][j+y[k]]=='o') d++;
				}
			}
		}
	}
	return d/2;
}

int main (){
	cin>>r>>c;
	char a[51][51];
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			cin>>a[i][j];
		}
	}
	int max=0;
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			if (a[i][j]=='.'){
				int tmp = count(a, i, j);
				if (tmp>max) max=tmp;
			}
		}
	}
	if (!max) cout<<count(a);
	else cout<<max;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P141PROB/
