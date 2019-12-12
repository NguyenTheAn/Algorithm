#include <bits/stdc++.h>

using namespace std;

ostream &operator << (ostream &out, char x[]){
	int n = strlen(x);
	for (int i=0; i<n; i++) cout<<x[i];
}

int main(){
	char x[1000];
	cin>>x;
	int n = strlen(x);
	if (!next_permutation(x, x+n)){
		cout<<0; 
		return 0;
	}
	cout<<x;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P132SUMJ/
