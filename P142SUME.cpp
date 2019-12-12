#include <iostream>
#include <string.h>
using namespace std;
int a[21];
bool test(int k, int s){
	int tong=0;
	for (int i=1; i<=k; i++){
		tong+=a[i];
	}
	if (tong==s) return 1;
	return 0;
}

int sinh(int n, int k, int s){
	for (int i=1; i<=n; i++){
		a[i]=i;
	}
	bool check=1;
	int d=0;
	do {
		int i=k;
		if (test(k, s)) d++;
		while (i>0 && a[i]==n+i-k) i--;
        a[i]++;
        if (i>0)
			for (int j=i+1; j<=n; j++){
				a[j]=a[j-1]+1;
			}
        else check=0;
	} while (check);
	return d;
}

int main()
{
	do{
		int n, k, s;
		cin>>n>>k>>s;
		if (n==0 && k==0 && s==0) break;
		if (k>n){
			cout<<0<<endl;
			continue;
		}
		cout<<sinh(n, k, s)<<endl;
	} while (1);
	return 0;
}
//http://www.spoj.com/PTIT/problems/P142SUME/
