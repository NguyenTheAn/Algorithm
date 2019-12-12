#include <bits/stdc++.h>
using namespace std;
int a[100000];
int segment[100000];

int init(int begin, int end, int si){
	if (begin==end){
		segment[si]=a[end];
		return segment[si];
	}
	int mid = (end-begin)/2;
	segment[si] = init(begin, begin+mid, si*2+1) + init(begin+mid+1, end, si*2+2);
	return segment[si];
}

void update (int newVal, int i, int begin, int end, int si){
	if (i< begin || i > end) return;
	int diff = newVal - a[i];
	segment[si] = segment[si] + diff;
	if (begin==end) return;
	int mid = (end-begin)/2;
	update(newVal, i, begin, begin+mid, 2*si+1);
	update(newVal, i, begin + mid + 1, end, 2*si+2);
}

int getSum(int node, int l, int r, int begin, int end){
	if (l<=begin && r>=end) return segment[node];
	if (end <l || begin >r) return 0;
	int mid = (end-begin)/2;
	return getSum(node*2+1, l, r, begin, begin+mid) + getSum(node*2+2, l, r, begin+mid+1, end);
}

int main() {
	int n;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	init(0, n-1, 0);
	int i, val;
	cin>>i>>val;
	for (int i=0; i<=2*n; i++) cout<<segment[i]<<" ";
	cout<<endl;
	update(val, i-1, 0, n-1, 0);
//	int l, r;
//	cin>>l>>r;
	for (int i=0; i<=2*n; i++) cout<<segment[i]<<" ";
//	cout<<getSum(0, l-1, r-1, 0, n-1);
//	cout<<endl;
	return 0;
}

