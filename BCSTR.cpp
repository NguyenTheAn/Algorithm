#include <bits/stdc++.h>
using namespace std;

int a[10000][10000];

int main (){
	string s1, s2;
	cin>>s1>>s2;
	int n1 = s1.length();
	int n2 = s2.length();
	for (int i=0; i<n1; i++){
		a[0][i]=0;
	}
	for (int i=0; i<n2; i++){
		a[i][0]=0;
	}
	for (int i=1; i<=n2; i++){
		for (int j=1; j<=n1; j++){
			if(s2[i-1]==s1[j-1]) 
				a[i][j]=a[i-1][j-1]+1;
			else 
				a[i][j]=a[i][j-1]>a[i-1][j]?a[i][j-1]:a[i-1][j];
		}
	}
	cout<<a[n2][n1];
	return 0; 
}
//https://www.spoj.com/PTIT/problems/BCSTR/
