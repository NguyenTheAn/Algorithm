#include <iostream>
#include <algorithm>
#include <math.h>
#define LL long long
using namespace std;
bool SquareNum(LL a){
	LL tmp=sqrt(a);
	if (tmp*tmp==a) {
		return 1;
	}
	return 0;
}

int main(){
	LL a, b;
	cin>>a>>b;
	LL c = a-b;
	if (a<b) {
		cout<<"0";
		return 0;
	}
	if (a==b){
		cout<<"infinity";
		return 0;
	}
	int count=0;
	for (int i=1; i*i<c; i++){
		if (c%i==0){
			if (i>b){
//				cout<<i<<" ";
				count++;
			}
			if (c/i>b){
//				cout<<c/i<<" ";
				count++;
			}
		}
	}
	if (SquareNum(c)) count++;
	cout<<count;
	return 0;
}
//http://www.spoj.com/PTIT/problems/P181PROH/
