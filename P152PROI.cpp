#include <iostream>
#include <math.h>
using namespace std;
int UCLN(int a, int b){
	while (1){
		int du=a%b;
		a=b;
		b=du;
		if (du==0) break;
	}
	return a;
}

int main()
{
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
		int a;
		cin>>a;
		while (a>360){
			a-=360;
		}
		if (a%180==0){
			if ((a/180)%2!=0){
				cout<<"$\n";
			}
			else cout<<"0$\n";
		}
		else {
			int ucln=UCLN(a, 180);
			if (a/ucln==1) cout<<"$/"<<180/ucln<<endl;
			else cout<<a/ucln<<"$/"<<180/ucln<<endl;
		}
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/P152PROI/
