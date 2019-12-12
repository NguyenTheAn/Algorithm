#include <iostream>
#define max_size 99999999
using namespace std;
int a[max_size];
int main()
{
	long n,k,du=0;
	cin>>k;
	string s;
	for (int i=0; i<k; i++){
		cin>>n;
		long dem=0;
		for (long i=1; i<n; i++){
			dem++;
			long t=i;
			t+=du;
			du=t/10;
			a[dem]=t%10;
		}
		for (long i=n; i>0; i--){
			dem++;
			long t=i;
			t+=du;
			du=t/10;
			a[dem]=t%10;
		}
		for (long long i=2*n-1; i>0; i--){
			cout<<a[i];
		}
		cout<<endl;
	}
}
//http://www.spoj.com/PTIT/problems/BCMULONE/
