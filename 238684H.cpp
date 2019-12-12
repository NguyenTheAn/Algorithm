#include <bits/stdc++.h>
using namespace std;

int dd1[1000001];
int dd2[1000001];

int main(){
	int t;
	cin>>t;
	while (t--){
		int n, d, r;
		for (int i=0; i<100001; i++) dd1[i]=0, dd2[i]=0;
		cin>>n>>d>>r;
		int count=0, pos1=0, pos2=0;
		while (1){
			pos1+=d;
			pos2+=r;
			pos1%=n;
			pos2%=n;
			dd1[pos1]=1;
			dd2[pos2]=1; 
			count++;
			if (dd2[pos1]==1) break;
			if (dd1[pos2]==1) break;
		}
		cout<<count<<endl;
	}
	return 0;
}
//https://codeforces.com/gym/238684/problem/H
