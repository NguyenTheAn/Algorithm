#include <bits/stdc++.h>

using namespace std;

int dd[101][101];
char in[101][101];
int n, m;

void DFS(int i, int j){
	dd[i][j]=1;
	int x[] = {1, 0, -1, -1, 0, 1, 1, -1};
	int y[] = {1, 1, 0, 1, -1, -1, 0, -1};
	for (int k=0; k<8; k++){
		int r = i + x[k];
		int c = j + y[k];
		if (r>=0 && c>=0 && r<n && c<m && dd[r][c]==0 && in[r][c]=='W'){
			DFS(r, c);
		}
	}
}

int main(){
	cin>>n>>m;
	for (int i=0; i<n; i++) cin>>in[i];
	int d=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if (dd[i][j]==0 && in[i][j]=='W'){
				DFS(i, j);
				d++;
			}
		}
	}
	cout<<d;
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCLKCOUN/
