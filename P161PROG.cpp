#include <iostream>
#include <algorithm>
#include <math.h>
#define LL long long
using namespace std;
bool cmp(LL a, LL b){
	return a>b;
}
bool SquareNum(LL a){
	LL tmp = sqrt(a);
	if (tmp*tmp==a) return 1;
	return 0;
}
bool handled(LL n){
	for (LL i=1; i*i<n; i++){
		if (n%i==0){
			if (SquareNum(i) && i>1) return 0;
			if (SquareNum(n/i) && n/i>1) return 0;
		}
	}
	return 1;
}
LL a[100000000]; // mang luu cac uoc cua n

int main (){
	LL n;
	cin>>n;
	int j=0;
	for (LL i=1; i*i<n; i++){
		if (n%i==0){
			a[j]=i;
			j++;
			a[j]=n/i;
			j++;
		} 
	}
	if (SquareNum(n)){
		a[j]=sqrt(n);
		j++;
	}
	sort(a, a+j, cmp);
	for (LL i=0; i<j; i++){
		if (handled(a[i])){
			cout<<a[i];
			break;
		}
	}
//	for (int i=0; i<j; i++){
//		cout<<a[i]<<" ";
//	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/P161PROG/
