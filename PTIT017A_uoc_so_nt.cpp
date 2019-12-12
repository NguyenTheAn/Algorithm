#include <iostream>
using namespace std;
long uocnt[10000001];

int main()
{
	int t;
	cin>>t;
	for (long i=2; i<10000001; i++){
		if (uocnt[i]==0){
			for (long j=i; j<10000001; j+=i){
				uocnt[j]++;
			}
		}
	}
	for (int l=0; l<t; l++){
		
		long a, b, k, d=0;
		cin>>a>>b>>k;
		for (long i=a; i<=b; i++){
			if (uocnt[i]==k){
				d++;
			}
		}
		cout<<"Case #"<<l+1<<": "<<d<<endl;
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/PTIT017A/
