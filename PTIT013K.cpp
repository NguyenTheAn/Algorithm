#include<bits/stdc++.h>
using namespace std;

long long fac(int n){
	int gt=1;
	for (int i=1; i<=n; i++){
		gt*=i;
	}
	return gt;
}

int main(){
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
		long long n;
		cin>>n;
		long long kq=0;
		int j=1;
		while (n!=0){
			kq = kq +(fac(j) * (n%10)) ;
			n/=10;
			j++;
		}
		cout<<kq<<endl;
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/PTIT013K/

