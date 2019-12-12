#include <iostream>
#include <math.h>
using namespace std;
long long nt[10000000]={0}, tong_uoc[10000000]={0};
void sangnt(long long , long long [], long long []);

main()
{
	long long a,b, tmp=0;	
	cin>>a>>b;
	sangnt(b, nt, tong_uoc);
	for (long long i=a; i<=b; i++){
		if (tong_uoc[i]>i) tmp++;
	}
	cout<<tmp;
}

void sangnt(long long n, long long a[], long long b[]){
	for (int i=2; i<=n; i++){
			for (int j=2*i; j<=n; j+=i){
			   if (a[j]==0) a[j]=i;
                b[j]+=i;
			}
		}
}
//http://www.spoj.com/PTIT/problems/BCPP/
