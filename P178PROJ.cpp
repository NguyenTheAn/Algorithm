#include <bits/stdc++.h>
using namespace std;

const long long base = 1e9+7;

int main(){
	priority_queue < int, vector<int> , greater <int> > pq;
	int n;
	cin>>n;
	for (int i=0; i<n; i++){
		int a;
		cin>>a;
		pq.push(a);
	}
	long long kq=0;
	while (pq.size()>1){
		int tmp1 = pq.top(); pq.pop();
		int tmp2 = pq.top(); pq.pop();
		long long tmp = (tmp1+tmp2)%base;
		kq += tmp;
		kq%=base;
		pq.push(tmp);
	}
	cout<<kq;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P178PROJ/
