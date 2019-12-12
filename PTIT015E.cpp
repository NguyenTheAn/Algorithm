#include <bits/stdc++.h>

using namespace std;

#define MAX 1000006

int x[1000006], y[1000006];
long long uoc[1000006], sum[1000006];

void Eratos(){
	x[0]=0;
	x[1]=1;
	y[0]=0;
	y[1]=1;
	uoc[0]=0;
	sum[0]=0;
	for (int i=2; i<MAX; i++){
		for (int j=i; j<MAX; j+=i){
			x[j]++;
			y[j]+=i;
		}
	}
	for (int i=2; i<MAX; i++){
		x[i]++;
		y[i]++;
	}
	for (int i=1; i<MAX; i++){
		uoc[i]=uoc[i-1] + x[i];
		sum[i]=sum[i-1] + y[i];
	}
}

main()
{
	Eratos();
	int t;
	scanf("%d", &t);
	for (int k=0; k<t; k++){
		long long a,b;
		scanf("%lld%lld", &a, &b);
		printf("%lld %lld\n", uoc[b]-uoc[a-1], sum[b]-sum[a-1]);
	}
}
//https://www.spoj.com/PTIT/problems/PTIT015E/
