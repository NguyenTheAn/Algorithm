#include <bits/stdc++.h>
using namespace std;

char s[502][502];
int n;

void init(){
	for (int i=0; i<=n+1; i++) s[0][i]='.', s[i][0], s[n+1][i]='.', s[i][n+1];
}

bool check(int i, int j){
	return s[i][j]=='X' && s[i-1][j+1]=='X' && s[i+1][j-1]=='X' && s[i+1][j+1]=='X' && s[i-1][j-1]=='X';
}

int main(){
	int d=0;
	cin>>n;
	init();
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cin>>s[i][j];
		}
	}
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if (check(i, j)) d++;
		}
	}
	cout<<d;
	return 0;
}
//https://codeforces.com/contest/1106/problem/A
