#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
	int c, v0, v1, a, l;
	cin>>c>>v0>>v1>>a>>l;
	int d = 0, v=v0;
//	if (v0>=c){
//		cout<<1;
//		return 0;
//	}
//	else c-=v0;
	while (c>0){
		c-=v;
		if (d>0) c+=l;
		if (v+a>v1) v=v1;
		else v+=a;
		d++;
	}
	cout<<d;
	return 0;
}
//http://www.spoj.com/ACMPTIT/problems/P182PROA/
