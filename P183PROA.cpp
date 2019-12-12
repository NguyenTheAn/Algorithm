#include <iostream>
#include <algorithm>
#include <math.h>

#define LL long long
using namespace std;

int main (){
	int n, k;
	cin>>n>>k;
	int a[200], sum=0;
	for (int i=0; i<n; i++){
		cin>>a[i];
		sum+=a[i];
	}
	int count=0;
	while ((count+n)*(k*10-5)>sum*10){
		count++;
		sum+=k;
	}
	cout<<count;
	return 0;
}
//http://www.spoj.com/ACMPTIT/problems/P183PROA/
