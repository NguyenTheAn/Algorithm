#include <bits/stdc++.h>
using namespace std;

long long a[100000000];
long long segment[100000000];

int get(int node, int l, int r, int begin, int end) {
    if (l<=begin && r>=end) return segment[node];
	if (end <l || begin >r) return 0;
	int mid = (end-begin)/2;
	return max(get(node*2+1, l, r, begin, begin+mid) , get(node*2+2, l, r, begin+mid+1, end)) ;
}

int init(int begin, int end, int si){
	if (begin==end){
		segment[si]=a[end];
		return segment[si];
	}
	int mid = (end-begin)/2;
	segment[si] = max(init(begin, begin+mid, si*2+1) , init(begin+mid+1, end, si*2+2));
	return segment[si];
}

int main() {
	int n, m;
	cin>>n>>m;
	for (int i=0; i<m; i++){
		int u, v, k;
		cin>>u>>v>>k;
		for (int j=u; j<=v; j++) a[j-1]+=k;
	}
	init(0, n-1, 0);
	int p;
	cin>>p;
	while (p--){
		int l, r;
		cin>>l>>r;
		cout<<get(0, l-1, r-1, 0, n-1)<<endl;
	}
	return 0;
}
//https://vn.spoj.com/problems/QMAX/
