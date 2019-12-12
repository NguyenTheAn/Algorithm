#include <bits/stdc++.h>

using namespace std;

int bin[100000], n;
bool dd[100000];

void Try(int i){
	for (int j=0; j<=1; j++){
		bin[i]=j;
		if (i==n-1){
			for (int j=0; j<n; j++){
				if (bin[j]==1) dd[j+1]=1;
			}
			for (int j=0; j<n; j++){
				if (dd[j]==1){
					if (bin[j]==0) cout<<1;
					else cout<<0;
				}
				else cout<<bin[j];
			}
			cout<<endl;
			for (int j=0; j<n; j++){
				dd[j]=0;
			}
		}
		else Try(i+1);
	}
}

int main(){
	cin>>n;
	Try(0);
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT121B/
