#include <bits/stdc++.h>
using namespace std;

bool prime[10001];
set <int> s;
vector <int> vi[10001];

void sieve(){
	for (int i=2; i*i<=10001; i++){
		if (!prime[i]){
			for (int j = i*i; j<10001; j+=i){
				prime[j]=1;
			}
		}
	}
}

bool check(int a, int b){
	int d=0;
	while (a && b){
		if (a%10 != b%10) d++;
		a/=10; b/=10;
	}
	if (d==1) return 1;
	return 0;
}

void generate(){
	set <int>::iterator it;
	for (it = s.begin(); it != s.end(); it++){
		set <int>::iterator it1;
		for (it1 = s.begin(); it1 != s.end(); it1++){
			if (check(*it, *it1)){
				vi[*it].push_back(*it1);
			}
		}
	}
}

int main(){
	sieve();
	for (int i=1001; i<10001; i+=2){
		if (!prime[i]) s.insert(i);
	}
	generate();
	int t;
	cin>>t;
	while (t--){
		int res[10001];
		memset(res, -1, sizeof (res));
		int src, des;
		cin>>src>>des;
		queue <int> qu;
		qu.push(src);
		res[src]=0;
		while (!qu.empty()){
			int u = qu.front(); qu.pop();
			if (u == des) break;
			for (int i=0; i<vi[u].size(); i++){
				int v = vi[u][i];
				if (res[v] == -1){
					res[v] = res[u]+1;
					qu.push(v);
				}
			}
		}
		cout<<res[des]<<endl;
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCACM11D/
