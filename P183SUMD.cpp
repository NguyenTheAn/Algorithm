#include <bits/stdc++.h>

using namespace std;
int x, y=0, z=0;
int k;

void Process(int n, int *a, int *b, int *c){
	if (n==1) {
		(*a)--, (*c)++;
		k--;
		if (k==0){
			cout<<x<<" "<<z<<" "<<y;
			return ;
		}
	}
	else {
		Process(n-1, a, c, b);
		Process(1, a, b, c);
		Process(n-1, b, a, c);
	}
}

int main(){
	int n;
	cin>>n>>k;
	x=n;
	Process(n, &x, &y, &z);
	return 0;
}
//https://www.spoj.com/ACMPTIT/problems/P183SUMD/
