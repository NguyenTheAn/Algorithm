#include <iostream>
#include <math.h>
using namespace std;
void sangnt(long n, long []);
long b[246912]={0};

int main()
{
	int c[100000];
	long n=1, dem=0, k=0;
	while (1){
		cin>>n;
		if (n==0) break;
		dem=0;
		sangnt(n, b);
		for (long i=n+1; i<=2*n; i++){
			if (b[i]==0) dem++;
		}
		c[k] =dem;
		k++;
	}
	for (int j=0; j<k; j++){
		cout << c[j]<<endl;
	}
	return 0;
}

void sangnt(long n, long a[]){ 
	a[0]=1; a[1]=1;
	for (long i=2; i<sqrt(2*n); i++){
			for (long j=i*i; j<=2*n; j+=i){
			    if (a[j]==0)
				a[j]=i;
			}
		}
}

