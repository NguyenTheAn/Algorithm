#include <bits/stdc++.h>

using namespace std;

int main(){
	long long y, n, k;
	bool check=0;
	cin>>y>>k>>n;
	for (int i=1; i*k<=n; i++){
		if (i*k>y){
			cout<<i*k-y<<" ";
			check=1;
		}
	}
	if (check==0) cout<<-1;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P143PROC/
