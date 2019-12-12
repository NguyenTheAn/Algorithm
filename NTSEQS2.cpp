#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
	int n, s;
	cin>>n>>s;
	int a[300];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	bool L[50000]={0};
	L[0]=1;
	for (int i=0; i<n; i++){
		for (int j=s; j>=a[i]; j--){
			if (L[j]==0 && L[j-a[i]]==1) L[j]=1;
		}
	}
	if (L[s]==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}
//http://www.spoj.com/PTIT/problems/NTSEQS2/
