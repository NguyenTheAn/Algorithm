#include <iostream>
using namespace std;
long long a[1000000];

int main()
{
	long long n, k,tmp=0, dem=0,j=0;
	cin>>n>>k;
	for (long long i=0; i<n; i++){
		cin>> a[i];
	}
	long long tong=0;
	for (long long i=0; i<n; i++){
		tong+=a[i];
		tmp++;
		if (tong<=k && tmp>dem) {
			dem=tmp;
		}
		while (tong>k){
			tong-=a[j];
			j++;
			tmp--;
		}
	}
	cout<<dem;
	return 0;
}


