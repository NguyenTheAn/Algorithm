#include <iostream>
#include <algorithm>
#include <math.h>
#define LL long long
using namespace std;
LL Test(LL n){
	LL x, y;
	LL ax, ay;
	LL count=0;
	for (LL i=2; i<=sqrt(n); i++){
		if (n%i==0) {
			x=i;
			y=n/i;
			if ((x+y-1)%2==0){
				ay=(x+y-1)/2;
				ax=y-ay;
				if (ay>1 && ay>ax){
					count++;
				}
			}
		}	
	}
	return count;
}

int main (){
	LL n;
	cin>>n;
	for (int i=0; i<n; i++){
		LL x, j;
		cin>>j>>x;
		cout<<j<<" "<<Test(2*x)<<endl;
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/BCPTICH/
