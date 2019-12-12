#include <iostream>
#include <string.h>
int abs(int a, int b){
	if (a>b){
		return a-b;
	}
	else return b-a;
}
using namespace std;
main()
{
	int t,check=1;
	cin>>t;
	char ch[100000];
	for (int i=0;i<t;i++){
		cin>>ch;
		check=1;
		int n=strlen(ch);
		for (int j=1;j<n;j++){
			if (abs(ch[j],ch[j-1]) != abs( ch[n-j-1],ch[n-j])){
				cout<<"NO\n";
				check=0;
				break;
			}
		}
		if (check==1) cout<<"YES\n";
	}
}
