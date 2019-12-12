#include <iostream>
using namespace std;
long a[1000000];
int main()
{
	long n, tmp=0;
	scanf("%ld", &n);
	for (long i=0;i<=n; i++){
		scanf("%ld", &a[i]);
	}
	if (n==0){
	printf("Yes");
	return 0;
	}
	for (long i=n; i>=2; i--){
		if (a[i]%i!=0){
			printf("No");
			return 0;
		}
		if (a[i]>=i){
            tmp+=a[i]/i;
			a[i]%=i;
			a[i-1]+=tmp;
		}
	}
	printf("Yes");

	return 0; 
}
//http://vn.spoj.com/PTIT/problems/P153PROE/
