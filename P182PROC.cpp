#include <iostream>
#include <algorithm>
#include <math.h>

#define LL long long
#define base 1000000009
using namespace std;
LL pow(LL t){
	if (t==0) return 1;
	if (t%2==0) {
		LL tmp = pow(t/2);
		return (tmp*tmp)%base;
	}
	else {
		return (pow(t-1)*2)%base;
	}
}
int main (){
	LL n, m, k, kq;
	cin>>n>>m>>k;
	m=n-m;
	LL t=n/k;
	if (m>=t) kq=n-m;
	else {
		t-=m;
		kq=((pow(t+1)-2)%base)*(k%base)%base;
		kq=(kq+n-t*k-m)%base;
	}
	cout<<kq;
	return 0;
}
//http://www.spoj.com/PTIT/problems/P182PROC/
