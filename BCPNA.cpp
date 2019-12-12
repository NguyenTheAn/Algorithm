#include<iostream>
#include <string.h>
using namespace std;

int main()
{
	int n,a[100001], tong=0, dem=0, t;
	memset(a, 0, sizeof a);
	a[1]=1;
	for (int i=2; i*i<=1e5; i++){
		for (int j=i*i; j<=1e5; j+=i){
			a[j]=1;
		}
	}
	cin>>t;
	for (int k=0; k<t; k++){
		dem=0;
		tong=0;
		cin>>n;
		if (a[n]==0) dem++;
		for (int i=2, j=2; i<n; i++){
			if (a[i]==0){
				tong+=i;
				if (tong==n) dem++;
				while (tong>n){
					if (a[j]==0){	
						tong-=j;
						if (tong==n) dem++;
					}
					j++;
				}
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/BCPNA/
