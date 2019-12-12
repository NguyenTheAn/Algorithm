#include <iostream>
using namespace std;
unsigned long long day_fibonanci(int);

int main()
{
	int n;
	cin>>n;
	cout<<day_fibonanci(n);
}

unsigned long long day_fibonanci(int n){
	int x=0,y=1,idx=0;
	if (n==1) return 1;
	if (n==2) return 1;
	if (n==3) return 2;
	for (int i=2;i<=n;i++){
		idx=(x+y)%1000000007;
		x=y;
		y=idx;
	}
	return idx;
}
