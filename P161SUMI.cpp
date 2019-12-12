#include <bits/stdc++.h>

using namespace std;

long long dd[100];

bool cmp(long long a, long long b){
	return a>b;
}

int main(){
	long long n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	for (long long i=0; i<n; i++){
		dd[s[i]-'A']++;
	}
	sort(dd, dd+100, cmp);
	long long ans=0;
	for (long long i=0; i<50; i++){
		if (k==0) break;
		if (dd[i]<=k){
			ans+=(dd[i]*dd[i]);
			k-=dd[i];
		}
		else {
			ans+=(k*k);
			k=0;
		}
	}
	cout<<ans;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P161SUMI/
