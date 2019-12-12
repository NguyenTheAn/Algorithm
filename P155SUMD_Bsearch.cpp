#include <iostream>
#include <algorithm>
using namespace std;

long long a[1000000], b[1000000];

long long Bsearch(long long x, long long left, long long right) {
	long long mid, ans;
	while (right >= left) {
		mid = (right + left) / 2;
		if (x >= a[mid]){
			ans = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}
	return ans;
}

int main() {
	long long n, m;
	cin>>n>>m;
	for (long long i=1; i<=n; i++) {
		cin>>a[i];
	}
	for (long long i=1; i<=m; i++) {
		cin>>b[i];
	}
	sort(a + 1, a+n+1);
	for (long long i=1; i <= m; i++) {
		if (b[i] >= a[n]) {
			cout<<n<<endl;
			continue;
		}
		if (b[i] < a[1]){
			cout<<"0\n";
			continue;
		}
		cout<<Bsearch(b[i], 1, n)<<endl;
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/P155SUMD/
