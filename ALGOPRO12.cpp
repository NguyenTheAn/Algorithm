#include <bits/stdc++.h>

using namespace std;

int uoc(int n){ //tim uoc cua n^2
	int tmp = sqrt(n);
	int kq=1;
	for (int i=2; i<=tmp; i++){
		if (n%i==0){
			int d=0;
			while (n%i==0){
				n/=i;
				d++;
			}
			kq*=(2*d+1);
		}
	}
	return n>1?kq*3:kq;
}

int main(){
	int n;
	cin>>n;
	cout<<uoc(n);
	return 0;
}

//https://www.spoj.com/PTIT/problems/ALGOPRO12/
