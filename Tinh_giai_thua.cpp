#include <iostream>
using namespace std;
int main()
{
	unsigned int n;
	unsigned long long giai_thua=1;
	while (true){
		cin>>n;
		if (n==0) break;
		giai_thua=1;
		for (int i = 1; i <= n; ++i)
		{
			giai_thua*=i;
		}	
		cout<<giai_thua<<endl;
		}
}
