#include <bits/stdc++.h>
using namespace std;

int dd[5];
int x[5];
int in[5];
const int n=4;
const int k=3;
bool check1 = 0, check2=0;

void Try(int i){
	for (int j=x[i-1]+1; j<=n-k+i; j++){
		if (dd[j]==0){
			dd[j]=1;
			x[i]=j;
			if (i==k){
				if (in[x[1]]+in[x[2]]>in[x[3]] && in[x[1]]+in[x[3]]>in[x[2]] && in[x[3]]+in[x[2]]>in[x[1]]) check1=1;
				else
				if (in[x[1]]+in[x[2]]==in[x[3]] || in[x[1]]+in[x[3]]==in[x[2]] || in[x[3]]+in[x[2]]==in[x[1]]) check2=1;
			}
			else Try(i+1);
			dd[j]=0;
		}
	}
}


int main(){
	for (int i=1; i<=4; i++) cin>>in[i];
	Try(1);
	if (check1==1){
		cout<<"TRIANGLE";
	}
	else if (check2==1){
		cout<<"SEGMENT";
	}
	else cout<<"IMPOSSIBLE";
	return 0;
}
//https://www.spoj.com/PTIT/problems/P146PROF/
