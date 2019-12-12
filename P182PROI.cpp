#include <iostream>
#include <algorithm>
#include <math.h>

#define LL long long

using namespace std;

// 2^(so bit 0 cua n)

int main (){
	LL n, kq=1;
	int k=0;
	cin>>n;
	while (n){
		k+=(n%2==0);
		n/=2;
	}
	while (k--){
		kq*=2;
	}
	cout<<kq;
	return 0;
}
//http://www.spoj.com/PTIT/problems/P182PROI/
