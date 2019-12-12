#include <iostream>
#include <algorithm>
#include <string.h>
#define LL long long
using namespace std;

main (){
	int n;
	cin>>n;
	char a[1000];
	cin>>a;
	int len=strlen(a), count=0;
	for (int i=0; i<len-2; i++){
		if (a[i]=='0' && a[i+1]=='1' && a[i+2]=='0'){
			a[i+2]='1';
			count++;
		}
	}
	cout<<count;
}
//http://www.spoj.com/PTIT/problems/P181PROI/
