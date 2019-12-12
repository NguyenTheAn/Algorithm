#include <bits/stdc++.h>
using namespace std;

int r, c;
int x[]={-1, 0, 1, 0};
int y[]={0, -1, 0, 1};
char a[101][101];
int dd[101][101];
typedef pair <int, int> pii;
queue <pii> q;

void BFS(int ii, int jj){
	if (a[ii][jj]=='B') return ;
	q.push(pii(ii, jj));
	while (!q.empty()){
		pii p1 = q.front();
		q.pop();
		for (int i=0; i<4; i++){
			int xx = p1.first + x[i];
			int yy = p1.second + y[i];
			if (xx>=0 && xx<r && yy>=0 && yy<c && !dd[xx][yy] && a[xx][yy]!='*'){
				dd[xx][yy]=dd[p1.first][p1.second]+1;
				q.push(pii(xx, yy));
			}
		}
	}
}

int main() {
	cin>>r>>c;
	int x, y;
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++) {
			cin>>a[i][j];
			if (a[i][j]=='C') x=i, y=j;
		}
	}
	BFS(x, y);
	cout<<dd[0][0];
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCMUNCH/
