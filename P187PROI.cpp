#include <bits/stdc++.h>
using namespace std;

typedef vector <long long> vi;

long long n, ans = LLONG_MAX;
vi A;

void init(){
	cin>>n; A.resize(n);
	for (long long i=0; i<n; i++) cin>>A[i];
}

void Solve() {
	for (long long i=0; i<n; i++){
		vi B = A; long long tmp=0;
		for (long long j=0; j<i; j++){
			B[j]+=tmp; tmp--;
		}
		for (long long j=i; j<n; j++){
			B[j]+=tmp; tmp++;
		}
		sort(B.begin(), B.end());
		long long Max = max(max(B[n/2], -tmp), 0LL);
		long long step = 0;
		for (long long j=0; j<i; j++){
			step += abs(Max - A[j]);
			Max++;
		}
		for (long long j=i; j<n; j++){
			step += abs(Max-A[j]);
			Max--;
		}
		ans = min(ans, step);
	}
	cout<<ans<<endl;
}

int main() {
	init();
	Solve();
    return 0;
}
//https://www.spoj.com/PTIT/problems/P187PROI/
