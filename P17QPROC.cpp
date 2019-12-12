#include <iostream>
#include <math.h>
using namespace std;
long long nt[10000000]={0}, tong_uoc[10000000]={0};
void sangnt(long long , long long [], long long []);
long long abs(long long ,long long );

main()
{
	long long a,b, tmp;	
	cin>>a>>b;
	sangnt(b, nt, tong_uoc);
	long long tong=0;
	for (long long i=a; i<=b; i++){
		if (i==1) tong+=1;
		else{
			if (nt[i]==0) tong+=i-1;
			else tong+=abs(tong_uoc[i]+1, i);
		}
	}
	cout<<tong;
}

long long abs(long long a,long long b){
	if (a>b) return a-b;
	else return b-a;
}

void sangnt(long long n, long long a[], long long b[]){
	for (int i=2; i<=n; i++){
			for (int j=2*i; j<=n; j+=i){
			   if (a[j]==0) a[j]=i;
                b[j]+=i;
			}
		}
}
