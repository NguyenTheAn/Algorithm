#include<bits/stdc++.h>
using namespace std;

int phi(int n) {
    int res = n;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            res -= res / i;
        }
    }
    if (n != 1) {
        res -= res / n;
    }
    return res;
}

bool isPrime(int n){
	if (n<2) return 0;
	for (int i=2; i*i<=n; i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
		int n;
		cin>>n;
		cout<<isPrime(phi(n))<<endl;
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/P152PROA/

