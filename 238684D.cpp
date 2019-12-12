#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int R, C, I;
		cin>>R>>C>>I;
		char a[101][101];
		for (int i=0; i<101; i++){
			for (int j=0; j<101; j++) a[i][j]='.';
		}
		for (int j=0; j<I; j++){
			int r1, c1, r2, c2;
			cin>>r1>>c1>>r2>>c2;
			char color;
			cin>>color;
			for (int i=r1-1; i<=r2-1; i++){
				for (int j=c1-1; j<=c2-1; j++){
					a[i][j]=color;
				}
			}
		}
		for (int i=0; i<R; i++){
			for (int j=0; j<C; j++) cout<<a[i][j];
			cout<<endl;
		}
	}
	return 0;
}
//https://codeforces.com/gym/238684/problem/D
