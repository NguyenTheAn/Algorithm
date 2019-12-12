#include <bits/stdc++.h>
using namespace std;

const long long oo = 1e9+7;

int n, m, d[1007], CE[1007], k;
typedef pair <int, int> ii;
vector <ii> vii[1007];

void init(){
	cin>>n>>m>>k;
	for (int i=0; i<m; i++){
		int x, y, z;
		cin>>x>>y>>z;
		vii[x].push_back(ii(z, y));
		vii[y].push_back(ii(z, x));
	}
	for (int i=1; i<=n; i++) d[i]=oo;
}

void dijkstra(int s, int f){
	priority_queue <ii,vector<ii>,greater<ii> > pq;
	for( int i = 1; i <= n; i++ ) {
		d[i] = oo;
		CE[i] = s;
	}
	d[s] = 0; CE[s] = 0;
	pq.push(ii(0,s));
	while (!pq.empty()){
		ii u = pq.top(); pq.pop();
		if (u.second==f) break;
		if (d[u.second]!=u.first) continue;
		for (int i=0; i<vii[u.second].size(); i++){
			ii v = vii[u.second][i];
			if (d[u.second]+v.first<d[v.second]){
				d[v.second] = d[u.second]+v.first;
				CE[v.second] = u.second;
				pq.push(ii(d[v.second], v.second));
			}
		}
	}
}

void TruyVet(int u, int v){
	vector <int> vi;
	vi.push_back(v);
	while (vi.back()!=u){
		vi.push_back(CE[vi.back()]);
	}
	cout<<vi.size()<<" ";
	for (int i=vi.size()-1; i>=0; i--) cout<<vi[i]<<" ";
}

int main(){
	init();
	for (int i=0; i<k; i++){
		int tmp, u, v;
		cin>>tmp>>u>>v;
		if (tmp == 0) {
			dijkstra(u, v);
			cout<<d[v]<<endl;
		}
		else {
			dijkstra(u, v);
			TruyVet(u, v);
			cout<<endl;
		}
	}
	return 0;
}
//https://vn.spoj.com/problems/FLOYD/
