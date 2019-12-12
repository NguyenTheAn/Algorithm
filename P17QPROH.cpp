#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(long long a, long long b){
	return a > b;
}

int main(){
	long long t;
	cin>>t;
	for (long long j=0; j<t; j++){
		long long n;
		cin>>n;
		long long u[1000], v[1000];
		for (long long i=0; i<n; i++){
			cin>>u[i];
		}
		for (long long i=0; i<n; i++){
			cin>>v[i];
		}
		sort(u, u+n);
		sort(v, v+n, cmp);
		long long kq = 0;
		for (long long i=0; i<n; i++){
			kq+=u[i]*v[i];
		}
		cout<<"Case #"<<j+1<<": "<<kq<<endl;
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/P17QPROH/
