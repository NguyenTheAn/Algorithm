#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

bool isSquare(long long n){
	long long tmp = sqrt(n);
	if (tmp*tmp==n) return 1;
	return 0;
}

int main(){
	int t;
	cin>>t;
	for (int j=0; j<t; j++){
		long long n;
		cin>>n;
		if (n==0){
			cout<<"1\n";
			continue;
		}
		long long d=0;
		for (int i=0; i*i<=n; i++){
			long long tmp=n-i*i;
			if (i*i>tmp) break;
			if (isSquare(tmp)) d++;
		}
		cout<<d<<endl;
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/P17QPROA/
