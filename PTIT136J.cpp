#include <bits/stdc++.h>

using namespace std;
string s[6];

int dem(char a, int hb, int he, int cb, int ce){
	int d=0;
	for (int i=hb; i<=he; i++){
		for (int j=cb; j<=ce; j++){
			if (s[i][j]!=a) d++;
		}
	}
	return d;
}

int demNgang(char a, char b, char c){
	int d = dem(a, 0, 1, 0, 8) + dem(b, 2, 3, 0, 8) +dem(c, 4, 5, 0, 8);
	return d;
}
int demDoc(char a, char b, char c){
	int d = dem(a, 0, 5, 0, 2) + dem(b, 0, 5, 3, 5) +dem(c, 0, 5, 6, 8);
	return d;
}

int dmin(int a, int b){
	return a > b ? b : a ;
}

int main(){
	int min=INT_MAX;
	for (int i=0; i<6; i++) cin>>s[i];
	for (char i='A'; i<='Z'; i++){
		for (char j='A'; j<='Z'; j++){
			if (i==j) continue;
			for (char k='A'; k<='Z'; k++){
				if (j==k) continue;
				if (dmin(demNgang(i, j, k), demDoc(i, j, k)) < min){
					min = dmin(demNgang(i, j, k), demDoc(i, j, k));
				}
			}
		}
	}
	cout<<min;
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT136J/
