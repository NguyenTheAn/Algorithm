#include <bits/stdc++.h>
using namespace std;


typedef pair <int, int> ii;
int n;
int dd[101][101];
char a[101][101];

bool check(ii s){
	if (s.first>=0 && s.first<n && s.second>=0 && s.second<n) return 1;
	return 0;
}

void BFS(ii s){
	queue <ii> q;
	q.push(s);
	dd[s.first][s.second]=1;
	while (!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		//di len
		for (int i=x-1; i>=0; i--){
			if (a[i][y]!='X' && !dd[i][y]){
                dd[i][y]=dd[x][y]+1;
                q.push(ii(i, y));
			}
			else break;
		}
		//di xuong
		for (int i=x+1; i<n; i++){
            if (a[i][y]!='X' && !dd[i][y]){
                dd[i][y]=dd[x][y]+1;
                q.push(ii(i, y));
			}
			else break;
		}
		//sang trai
		for (int i=y-1; i>=0; i--){
            if (a[x][i]!='X' && !dd[x][i]){
                dd[x][i]=dd[x][y]+1;
                q.push(ii(x, i));
            }
            else break;
		}
		//sang phai
		for (int i=y+1; i<n; i++){
            if (a[x][i]!='X' && !dd[x][i]){
                dd[x][i]=dd[x][y]+1;
                q.push(ii(x, i));
            }
            else break;
		}
	}
}

int main(){
	cin>>n;
	for (int i=0; i<n; i++){
        cin>>a[i];
	}
	ii start, finish;
	cin>>start.first>>start.second;
	cin>>finish.first>>finish.second;
	BFS(start);
	cout<<dd[finish.first][finish.second]-1;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P17PRO05/
