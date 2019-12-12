#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int h[11], c[11], cheo1[21], cheo2[21];
int n, d=0;

void Try(int i){
	for (int j=0; j<n; j++){
		if (!h[j] && !c[i] && !cheo1[i+j] && !cheo2[i-j+n-1]){
			c[i]=1;
			h[j]=1;
			cheo1[i+j]=1;
			cheo2[i-j+n-1]=1;
			if (i==n-1) d++;
			else Try(i+1);
			c[i]=0;
			h[j]=0;
			cheo1[i+j]=0;
			cheo2[i-j+n-1]=0;
		}
	}
}

int main(){
	cin>>n;
	Try(0);
	cout<<d;
	return 0;
}
//http://www.spoj.com/PTIT/problems/BCQUEEN/
