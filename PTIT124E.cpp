#include <bits/stdc++.h>

using namespace std;
bool visited[1001];
int in[1001][1001], k, n, m;
int place[1001];
int a=0;
bool check[1001][1001];

void display(){
	for (int i=0; i<n; i++){
		if (visited[i]) cout<<i+1<<" ";
	}
	cout<<endl;
}

void Init(int i, int j){
	in[i-1][j-1]=1;
}

void DFS(int i){
	if (check[a][i]) return ;
	check[a][i]=1;
	for (int u=0; u<n; u++){
		if (in[i][u]==1 && check[a][u]==0){
			DFS(u);
		}
	}
}

int main(){
	cin>>k>>n>>m;
	for (int i=0; i<k; i++){
		cin>>place[i];
	}
	for (int i=0; i<m; i++){
		int a, b;
		cin>>a>>b;
		Init(a, b);
	}
	for (int i=0; i<k; i++) a=place[i]-1, DFS(a);
//	for (int i=0; i<n; i++){
//		for (int j=0; j<n; j++) cout<<in[i][j]<<" ";
//		cout<<endl;
//	}
//	for (int i=0; i<n; i++){
//		for (int j=0; j<n; j++) cout<<check[i][j]<<" ";
//		cout<<endl;
//	}
	int ans=0;
	for (int i=0; i<n; i++){
		int tmp=0;
		for (int j=0; j<k; j++){
			tmp += check[place[j]-1][i];
		}
		ans += tmp==k;
	}
	cout<<ans;
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT124E/
