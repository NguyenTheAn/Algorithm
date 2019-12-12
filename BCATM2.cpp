#include <bits/stdc++.h>

using namespace std;

int n;
long long s, a[100], bestconfig=LONG_MAX, d=0;
int dd[100];

void Try(int i){
	for (int j=0; j<=1; j++){
		dd[i]=j;
		if (dd[i]==1) s-=a[i], d++;
		if (s>=0 && d<bestconfig){
			if (i==n-1){
				if (s==0) bestconfig = d;
			}
			else Try(i+1);
		}
		if (dd[i]==1) s+=a[i], d--;
	}
}

int main(){
	cin>>n>>s;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	Try(0);
	cout<<bestconfig;
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCATM2/
