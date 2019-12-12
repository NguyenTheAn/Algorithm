#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000000

string s;
struct node{
	int optimal;
	int open;
	int close;
	node(){};
	node(int opt, int op, int cl){
		optimal=opt;
		open=op;
		close=cl;
	}
};
node segment[4*MAXN];

node operator+ (node left, node right){
	node res;
	int tmp = min(left.open, right.close);
	res.optimal = left.optimal + right.optimal+tmp;
	res.open = right.open + left.open - tmp;
	res.close = right.close + left.close -tmp;
	return res;	
}

void init(int begin, int end, int si){
	if (begin == end){
		if (s[begin]=='(') segment[si]=node(0,1,0);
		else segment[si]=node(0,0,1);
		return;
	}
	int mid = (end-begin)/2;
	init(begin, begin+mid, si*2+1);
	init(begin+mid+1, end, si*2+2);
	segment[si]=segment[si*2+1]+segment[si*2+2];
}

node getSum(int l, int r, int si, int begin, int end){
	if (l<=begin && r>=end) return segment[si];
	if (l>end || r<begin) return node(0,0,0);
	int mid = (end-begin)/2;
	return getSum(l, r, si*2+1, begin, begin+mid)+getSum(l, r, si*2+2, begin+mid+1, end);
}

int main() {
	cin>>s;
	init(0, s.length()-1, 0);
	int t;
	cin>>t;
	while (t--){
		int l, r;
		cin>>l>>r;
		cout<<2*getSum(l-1, r-1, 0, 0, s.length()-1).optimal;
		cout<<endl;
	}
	return 0;
}
//https://codeforces.com/contest/380/problem/C
