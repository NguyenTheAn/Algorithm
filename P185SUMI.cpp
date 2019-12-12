#include <bits/stdc++.h>

using namespace std;

long long a[100001];

void init(){
	for (int i=0; i<100001; i++) a[i] = i*i;
}

long long search(long long b, long long n){
	for (int i=b; i>0; i--){
		long long tmp = n/a[i];
		if (a[i]*tmp==n) return i;
	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	init();
	while (t--){
		long long n;
		cin>>n;
		long long tmp = search((long long) sqrt(n), n);
		cout<<tmp<<" "<<n/(tmp*tmp)<<"\n";
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/P185SUMI/
