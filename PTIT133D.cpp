#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	do {
		string s;
		cin>>s;
		if (s=="[END]") break;
		long long n;
		cin>>n;
		if (n%5==2 || n%5==0) cout<<"Hanako\n";
		else cout<<"Taro\n";
	} while (1);
	return 0;
}
//http://www.spoj.com/PTIT/problems/PTIT133D/
