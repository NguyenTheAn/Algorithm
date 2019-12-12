#include<iostream>
#include <math.h>
using namespace std;


int main()
{
	int a[100];
	long long n, tmp;
	cin>>n;
	if (n<1000){
		cout<<n;
		return 0;
	}
	int i=0;
	tmp=n;
	while (tmp!=0){
		tmp/=10;
		i++;
	}
	tmp=n;
	for (int j=i-1; j>=0; j--){
		a[j]=tmp%10;
		tmp/=10;
	}
	int du=i%3;
	if (du!=0){
		for (int j=0; j<du; j++){
			cout<<a[j];
		}
		cout<<",";
	}
	for (int j=du; j<i; j++){
		cout<<a[j];
		if (j==i-1) break;
		if ((j-du+1)%3==0) cout<<",";
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/BCCOMMAS/

