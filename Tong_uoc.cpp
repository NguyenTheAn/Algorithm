#include <iostream>
#include <math.h>
using namespace std;

main(){
	long idx;
	unsigned long long n;
	double x; 
	cin>>idx;
	for (int i=0;i<idx;i++){
		cin>>n;
		long long tong=0;
		x=sqrt((double) n);
		for (long j=1;j<x;j++){
			if (n%j==0){
				tong+=j;
				tong+=n/j;
			}
		}
		if (x==(int) x) tong+=x;
		cout<<tong<<"\n";
	}
}

