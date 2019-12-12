#include <bits/stdc++.h>

using namespace std;

int dd[10][10];
int n, step=1;

void Display(){
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cout<<dd[i][j]<<" ";
		}
		cout<<endl;
	}
}

void Try(int i, int j){
	int dr[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int dc[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
	for (int k=0; k<8; k++){
		int r = i + dr[k];
		int c = j + dc[k];
		if (r>=1 && c>=1 && r<=n && c<=n && dd[r][c]==0){
			dd[r][c]=++step;
			Try(r, c);
		}
	}
	if (step == n*n) return;
	else dd[i][j]=0, step--;
}

int main(){
	cin>>n;
	int x, y;
	cin>>x>>y;
	dd[x][y]=1;
	Try(x, y);
	Display();
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCKNIGHT/
