#include <bits/stdc++.h>
using namespace std;

long long dp[61];
int n;

void init(){
	dp[0]=3;
	for (int i=1; i<61; i++){
		dp[i] = 2*dp[i-1] + i + 3;
	}
}

char Try(int k){
	if (k==0){
		if (n==1) return 'm';
		return 'o';
	}
	if (n<=dp[k-1]) return Try(k-1);
	if (n>dp[k-1] && n<=dp[k-1]+k+3) {
		n-=dp[k-1];
		return Try(0);
	}
	if (n>dp[k-1]+k+3) {
		n-=(dp[k-1]+k+3);
		Try(k-1);
	}
}


int main(){
	init();
	cin>>n;
	int k=0;
	for (int i=0; i<61; i++){
		if (dp[i]>n){
			k=i;
			break;
		}
	}
	cout<<Try(k);
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT121D/
