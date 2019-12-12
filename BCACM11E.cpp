#include <bits/stdc++.h>
using namespace std;

int n;
int in[100][100];
bool visited[1000];

void Init(){
	for (int i=0; i<n; i++) visited[i]=0;
}

void DFS(int i, int a[100][100]){
	visited[i]=1;
	for (int j=0; j<n; j++){
		if (visited[j]==0 && a[i][j]==1){
			DFS(j, a);
		}
	}
}

int Slt(int a[100][100], int u=-1){
	int slt=0;
	for (int i=0; i<n; i++){
		if (visited[i]==0 && i!=u){
			slt++;
			DFS(i, a);
		}
	}
	return slt;
}

int Try(int i){
	Init();
	int clone[100][100];
	for (int r=0; r<n; r++){
		for (int c=0; c<n; c++){
			if (r==i || c==i) clone[r][c]=0;
			else clone[r][c]=in[r][c];
		}
	}
	return Slt(clone, i);
}

int main (){
	int t;
	cin>>t;
	while (t--){
		cin>>n;
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				cin>>in[i][j];
			}
		}
		int sltmax = 1;
		int p=0;
	//	bool check=0;
		for (int i=0; i<n; i++){
			int slt = Try(i);
			if (slt > sltmax){
				sltmax=slt;
				p=i;
			}
		}
		if (sltmax>1) cout<<p+1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCACM11E/
