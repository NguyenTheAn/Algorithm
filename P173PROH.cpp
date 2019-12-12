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
		int n;
		cin>>n;
		long long d=0;
		for (int i=1; i*i<n; i++){
			if (n%i==0){
				if (i%2==0) d++;
				if ((n/i)%2==0) d++;
			}
		}
		if (isSquare(n)){
			long long tmp=sqrt(n);
			if (tmp%2==0) d++;
		}
		cout<<d<<endl;
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/P173PROH/
