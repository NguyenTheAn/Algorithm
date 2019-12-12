#include <bits/stdc++.h>
using namespace std;

long long m;
int step = -1, d = 0;

void Try(long long n){
	if (n > m) return ;
	if (n == m) {
		step = d;
	}
	for (int i=2; i<=3; i++){
		d++;
		Try(n*i);
		d--;
	}
}

int main(){
	long long n;
	cin>>n>>m;
	Try(n);
	cout<<step;
	return 0;
}
//https://codeforces.com/contest/1141/problem/A
