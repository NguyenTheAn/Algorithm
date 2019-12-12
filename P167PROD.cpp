#include <iostream>
#include <string.h>
using namespace std;
int check(char []);
int arrtonum(char []);

main()
{
	char a[100], b[100], c[100];
	cin>>a>>b>>c;
	
	if (check(a)!=-1){
		int tmp, n=strlen(a);
		tmp=arrtonum(c) - arrtonum(b);
		for (int i=n-1; i>check(a); i--){
			tmp/=10;
		}
		cout<<tmp%10;
	}
	if (check(b)!=-1){
		int tmp, n=strlen(b);
		tmp=arrtonum(c) - arrtonum(a);
		for (int i=n-1; i>check(b); i--){
			tmp/=10;
		}
		cout<<tmp%10;
	}
	if (check(c)!=-1){
		int tmp, n=strlen(c);
		tmp=arrtonum(a) + arrtonum(b);
		for (int i=n-1; i>check(c); i--){
			tmp/=10;
		}
		cout<<tmp%10;
	}
}

int check(char a[]){
	int n=strlen(a);
	for (int i=0; i<n; i++){
		if (a[i]=='?') return i;
	}
	return -1;
}

int arrtonum(char a[]){
	int n=strlen (a);
	int x=0;
	for (int i=0; i<n; i++){
		x=x*10 + (a[i]-'0');
	}
	return x;
}
