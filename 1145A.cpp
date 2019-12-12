#include<bits/stdc++.h>
using namespace std;

int n, a[100], res = -1;

bool isSorted(int i, int j){
	for (int k = i; k<j; k++){
		if (a[k] > a[k+1]) return 0;
	}
	return 1;
}

void Process(int i, int j){
	if (i==j) {
		res = max(res, 1);
		return ;
	}
	if (isSorted(i, j)) {
		res = max(j-i+1, res);
	}
	Process(i, (j+i)/2);
	Process((j+i)/2+1, j);
	
}

int main() {
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	Process(0, n-1);
	cout<<res;
    return 0;
}
//https://codeforces.com/contest/1145/problem/A
