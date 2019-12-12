#include <iostream>
#include <stack>
using namespace std;
 
int main()
{
	int n, x=1, y;
	cin>>n;
	if (n%7==0) {
		x=n/7;
		for (int i=0; i<x; i++) cout<<"7";
		return 0;
	}
	while (1) {
		n-=4;
		if (n%7==0) break;
		if (n<0){
			cout<<"-1";
			return 0;
		}
		x++;
	}
	y=n/7;
	for (int i=0; i<x; i++) cout<<"4";
	for (int i=0; i<y; i++) cout<<"7";
	return 0;
}
//http://www.spoj.com/PTIT/problems/BCLUCKY2/
