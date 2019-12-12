#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    long long n, k;
    cin>>n>>k;
    char a[100005];
    cin>>a;
    int len=strlen(a);
    for (int i=0; i<len-1; i++){
    	if (a[i]=='4' && a[i+1]=='7'){
    		if (i%2==0 && i<len-2 && a[i+2]=='7'){
    			k%=2;
    			if (k==1) a[i+1]='4';
    			break;
			}
			if (i%2==1 && i>0 && a[i-1]=='4'){
				k%=2;
				if (k==1) a[i]='7';
				break;
			}
			if (i%2==0) a[i+1]='4';
			else a[i]='7';
			k--;
			if (k==0) break;
		}
	}
	cout<<a;
    return 0;
}
//https://www.spoj.com/PTIT/problems/P165SUMA/
