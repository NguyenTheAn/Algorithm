#include <bits/stdc++.h>

using namespace std;

int Process(char in[][100], int n){
	int x[]={0, 1, -1, 0};
	int y[]={1, 0, 0, -1};
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			int d=0;
			for (int k=0; k<4; k++){
				int h = i + x[k];
				int c = j + y[k];
				if (h>=0 && c>=0 && h<n && c<n && in[h][c]=='o') d++;
			}
			if (d%2!=0) return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	cin>>n;
	char a[100][100];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++) cin>>a[i][j];
	}
	if (Process(a, n)) cout<<"YES";
	else cout<<"NO";
	return 0;
}
//https://www.spoj.com/PTIT/problems/P161SUMH/
