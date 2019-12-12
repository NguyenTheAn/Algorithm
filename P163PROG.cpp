#include<bits/stdc++.h>
using namespace std;


int main(){
	long long n, x;
	cin>>n>>x;
	int d=0;
	for (int i=1; i<=n; i++){
		if (x%i==0 && x/i<=n && x%(x/i)==0) d++;
	}
	cout<<d;
	return 0;
}

//http://www.spoj.com/PTIT/problems/P163PROG/
