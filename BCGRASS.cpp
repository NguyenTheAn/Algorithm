#include <bits/stdc++.h>

using namespace std;

bool visited[100][100];
char in[100][100];
int R, C;

void DFS(int i, int j){
	visited[i][j]=1;
	int xqX[]={0, 1, -1, 0};
	int xqY[]={1, 0, 0, -1};
	for (int u=0; u<4; u++){
		int h = i + xqX[u];
		int c = j + xqY[u];
		if (h>=0 && h<R && c>=0 && c<C && in[h][c]=='#' && visited[h][c]==0){
			DFS(h, c);
		}
	}
}

int main(){
	int d=0;
	cin>>R>>C;
	for (int i=0; i<R; i++){
		for (int j=0; j<C; j++) cin>>in[i][j];
	}
	for (int i=0; i<R; i++){
		for (int j=0; j<C; j++){
			if (visited[i][j]==0 && in[i][j]=='#'){
				d++;
				DFS(i, j);
			}
		}
	}
	cout<<d;
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCGRASS/
