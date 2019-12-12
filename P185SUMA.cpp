#include <bits/stdc++.h>
using namespace std;


typedef pair <int, int> ii;
int n, m;
int dd[1000][1000];

bool check(ii s){
	if (s.first>=0 && s.first<n && s.second>=0 && s.second<m) return 1;
	return 0;
}

void BFS(ii s){
	int d=1;
	int dr[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int dc[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
	queue <ii> q;
	q.push(s);
	dd[s.first][s.second]=d;
	d++;
	while (!q.empty()){
		ii u = q.front();
		q.pop();
		for (int i=0; i<8; i++){
			ii v;
			v.first = u.first+dr[i];
			v.second = u.second + dc[i];
			if (check(v) && !dd[v.first][v.second]){
				q.push(v);
				dd[v.first][v.second]=dd[u.first][u.second]+1;
			}
		}
	}
}

int main(){
	cin>>n>>m;
	ii start, finish;
	cin>>start.first>>start.second;
	cin>>finish.first>>finish.second;
	BFS(start);
	cout<<dd[finish.first][finish.second]-1;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P185SUMA/
