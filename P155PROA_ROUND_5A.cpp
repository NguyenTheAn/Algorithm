#include <iostream>
using namespace std;
void day_fibonanci(long long, long long);

int main()
{
	long long n,a,tong=0;
	cin>>a>>n;
	if (n<3){
		cout<<a*n;
		return 0;
	}
	day_fibonanci(n,a);
}

void day_fibonanci(long long n, long long a){
	long long x=0,y=1,idx=0,tong=0;
	for (long long i=2;i<=n;i++){
		idx=(x+y)%1000000007;
		tong += (idx*a) % 1000000007;
		x=y;
		y=idx;
	}
	tong=(tong+a)%1000000007;
	cout<<tong;
}
