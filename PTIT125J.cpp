#include <bits/stdc++.h>

using namespace std;

char m[31][31];
int n;

char check(int i, int j){
	if (m[i][j]==m[i+1][j] && m[i][j]==m[i+2][j] && m[i][j]!='.' && i+2<n) return m[i][j];
	if (m[i][j]==m[i][j+1] && m[i][j]==m[i][j+2] && m[i][j]!='.' && j+2<n) return m[i][j];
	if (m[i][j]==m[i+1][j+1] && m[i][j]==m[i+2][j+2] && m[i][j]!='.' && i+2<n && j+2<n) return m[i][j];
	if (m[i][j]==m[i+1][j-1] && m[i][j]==m[i+2][j-2] && m[i][j]!='.' && i+2<n && j-2>=0) return m[i][j];
	return 0;
}

int main(){
	cin>>n;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++) cin>>m[i][j];
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			char win = check(i, j);
			if (win){
				cout<<win;
				return 0;
			}
		}
	}
	cout<<"ongoing";
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT125J/
