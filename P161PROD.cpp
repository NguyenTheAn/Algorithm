#include<bits/stdc++.h>
using namespace std;

int a[300];
int b[300];

int main(){
	char s[3][20]={("qwertyuiop"), ("asdfghjkl;"), ("zxcvbnm,./")};
	for (int i=0; i<3; i++){
		for (int j=0; s[i][j]; j++){
			a[s[i][j]]=i;
			b[s[i][j]]=j;
		}
	}
	char c;
	cin>>c;
	char input[1000];
	cin>>input;
	int n=strlen(input);
	switch (c){
		case 'R':{
			for (int i=0; i<n; i++){
				if (b[input[i]]==0) input[i]=s[a[input[i]]][9];
				else input[i]=s[a[input[i]]][b[input[i]]-1];
			}
			break;
		}
		case 'L':{
			for (int i=0; i<n; i++){
				if (b[input[i]]==9) input[i]=s[a[input[i]]][0];
				else input[i]=s[a[input[i]]][b[input[i]]+1];
			}
			break;
		}
	}
	cout<<input;
	return 0;
}
//http://www.spoj.com/PTIT/problems/P161PROD/
