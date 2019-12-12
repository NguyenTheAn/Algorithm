#include <bits/stdc++.h>
using namespace std;
 
char s[10][10];
bool ok=0;



bool check(){
	for (int i=0; i<9; i++){
		bool dd[10]={0};
		for (int j=0; j<9; j++){
			dd[s[i][j]-'0']++;
		}
		for (int j=1; j<9; j++){
			if (dd[j]==0) return 0;
		}
	}	
	for (int j=0; j<9; j++){
		bool dd[10]={0};
		for (int i=0; i<9; i++){
			dd[s[i][j]-'0']++;
		}
		for (int i=1; i<=9; i++) {
			if (dd[i]==0) return 0;
		}
	}
	for (int i=0; i<9; i+=3){
		for (int j=0; j<9; j+=3){
			bool dd[10]={0};
			for (int m=i; m<i+3; m++){
				for (int n=j; n<j+3; n++){
					dd[s[m][n]-'0']++;
				}
			}
			for (int i=1; i<=9; i++) {
				if (dd[i]==0) return 0;
			}
		}
	}
	return 1;
}

void Try(int i, int j){
	for (int k=1; k<=9; k++){
		if (s[i][j]=='0'){
			s[i][j]=k+'0';
			if (j==8){
				if (i==8){
					if (check()) {
						for (int l=0; l<9; l++) cout<<s[l]<<endl;
						ok=1;
					}
				}
				else Try(i+1, 0);
				
			}
			else Try(i, j+1);
			s[i][j]='0';
		}
	}
	if (j==8){
		if (i==8){
			if (check()) {
				for (int l=0; l<9; l++) cout<<s[l]<<endl;
				ok=1;
			}
		}
		else Try(i+1, 0);
		
	}
	else Try(i, j+1);
}

int main() {
	int t;
	cin>>t;
	for (int k=0; k<t; k++){
		ok=0;
		for (int i=0; i<9; i++) cin>>s[i];
		Try(0, 0);
//		cout<<ok;
		if (ok==0) cout<<"Could not complete this grid.\n";
	}
	
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT128H/
