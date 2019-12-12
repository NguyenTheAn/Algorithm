#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long n, delta;
	cin>>n;
	if (n<3){
		cout<<"NO";
		return 0;
	}
	else{
		delta = 1 + 8*n;
		long long tmp = sqrt(delta);
		if (tmp*tmp==delta) cout<<"YES";
		else cout<<"NO"; 
	}
}


