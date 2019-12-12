#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
typedef pair <int, int> ii;
typedef vector< vector<ii> > Graph;
typedef priority_queue< ii, vector<ii>, greater<ii> > MinHeap;


int Prim(Graph g){
	MinHeap heap;
	heap.push(ii(0, 1));
	int minTree = 0;
	vector<bool> dd(g.size(), 0);
	while (!heap.empty()){
		while (!heap.empty() && dd[heap.top().se]) heap.pop();
		if (heap.empty()) break;
		ii u = heap.top(); heap.pop();
		dd[u.se] = 1;
		minTree += u.fi;
		for (int i=0; i<g[u.se].size(); i++){
			heap.push(ii(g[u.se][i]));
		}
	}
	return minTree;
}

int main() {
	int n, m;
	cin>>n>>m;
	Graph g(n+1);
	for (int i=0; i<m; i++){
		int u, v, c;
		cin>>u>>v>>c;
		g[u].push_back(ii(c, v));
		g[v].push_back(ii(c, u));
	}
	cout<<Prim(g);
    return 0;
}
