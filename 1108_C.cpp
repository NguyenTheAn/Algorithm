#include <bits/stdc++.h>
using namespace std;

char s[200001];

int main(){
	int n;
	cin>>n;
	cin>>s;
	int min=1000001, pos=-1;
	string color[] = {"RBG", "RGB", "BRG", "BGR", "GRB", "GBR"};
	string out[6];
	for (int i=0; i<6; i++){
		int d=0;
		for (int j=0; j<n; j++){
			if (s[j]!=color[i][j%3]){
				d++;
				out[i]+=color[i][j%3];
			}
			else out[i]+=s[j];
		}
		if (d<min) {
			min=d;
			pos = i;
		}
	}
	cout<<min<<endl;
	cout<<out[pos];
	return 0;
}
//https://codeforces.com/contest/1108/problem/C
