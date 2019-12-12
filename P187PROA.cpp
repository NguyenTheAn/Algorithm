#include <bits/stdc++.h>
using namespace std;

bool dd[10005];

int main()
{
	int n, m, k;
	cin>>n>>m>>k;
	int light[1000];
	for (int i=0; i<m; i++){
		cin>>light[i];
	}
	int d=0;
	for (int i=1, j=0; i<=n, j<m; i++){
		if (light[j]==i){
			for (int x=i, y=i; x>=i-k, y<=i+k; x--, y++){
				if (x>=0) dd[x]=1;
				if (y<=n) dd[y]=1;
			}
			j++;
		}
	}
	int tmp=2*k+1;
	int count=0;
	for (int i=1; i<=n; i++){
		if (dd[i]==0) count++;
		if (dd[i]!=0 || i==n) {
			if (count>0){
				if (tmp>=count) d++;
				else {
					if (count%tmp==0) d=d+count/tmp;
					else d=d+count/tmp+1;
				}
			}
			count=0;
		}
	}
	cout<<d;
	return 0;
}
//http://www.spoj.com/PTIT/problems/P187PROA/
