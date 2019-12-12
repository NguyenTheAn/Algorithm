#include <bits/stdc++.h>
using namespace std;

int a[1000][1000];
void Init(string s1, string s2){
	int n1 = s1.length();
	int n2 = s2.length();
	for (int i=0; i<n1; i++){
		a[0][i]=0;
	}
	for (int i=0; i<n2; i++){
		a[i][0]=0;
	}
}

int Handled(string s1, string s2){
	int n1 = s1.length();
	int n2 = s2.length();
	for (int i=1; i<=n2; i++){
		for (int j=1; j<=n1; j++){
			if(s2[i-1]==s1[j-1]) 
				a[i][j]=a[i-1][j-1]+1;
			else 
				a[i][j]=a[i][j-1]>a[i-1][j]?a[i][j-1]:a[i-1][j];
		}
	}
	return a[n2][n1];
}

int main (){
	int t;
	cin>>t;
	while (t--){
		string s[101];
		int n;
		cin>>n;
		for (int i=0; i<n; i++){
			cin>>s[i];
		}
		int max = 0;
		for (int i=0; i<n; i++){
			for (int j=i+1; j<n; j++){
				Init(s[i], s[j]);
				int tmp = Handled(s[i], s[j]);
				if (tmp > max ) max = tmp;
			}
		}
		cout<<max<<endl;
	}
	return 0; 
}
//https://www.spoj.com/PTIT/problems/PTIT014C/
