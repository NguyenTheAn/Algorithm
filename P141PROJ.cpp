#include <bits/stdc++.h>
using namespace std;

int main (){
	char in[5][5];
	for (int i=0; i<4; i++) cin>>in[i];
	int b=0, w=0;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			b=0, w=0;
			for (int k=i; k<=i+1; k++){
				for (int l=j; l<=j+1; l++){
					if (in[k][l]=='#') b++;
					else w++;
				}
			}
			if (b>=3 || w>=3){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}
//https://www.spoj.com/PTIT/problems/P141PROJ/
