#include <bits/stdc++.h>

using namespace std;

char input[4][4];
int bin[4][4];
int d=0, bestconfig=INT_MAX;
bool t=0;

bool check(char s[4][4]){
	char tmp = s[0][0];
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			if (s[i][j]!=tmp) return 0;
		}
	}
	return 1;
}

void update(int i, int j, char a[4][4]){
	if (a[i][j] == 'w') a[i][j] = 'b';
	else a[i][j] = 'w';
	if (i-1 >= 0){
		if (a[i-1][j] == 'w') a[i-1][j] = 'b';
		else a[i-1][j] = 'w';
	}
	if (j-1 >= 0){
		if (a[i][j-1] == 'w') a[i][j-1] = 'b';
		else a[i][j-1] = 'w';
	}
	if (i+1 < 4){
		if (a[i+1][j] == 'w') a[i+1][j] = 'b';
		else a[i+1][j] = 'w';
	}
	if (j+1 < 4){
		if (a[i][j+1] == 'w') a[i][j+1] = 'b';
		else a[i][j+1] = 'w';
	}
}

ostream &operator << (ostream &out, char input[4][4]){
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			out<<input[i][j]<<" ";
		}
		out<<endl;
	}
	out<<endl;
}

bool Test(){
	d=0;
	char cop[4][4];
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			cop[i][j]=input[i][j];
		}
	}
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			if (bin[i][j]==1){
				d++;
				update(i, j, cop);
			} 
		}
	}
	return check(cop);
}


int Try(int i, int j){
	for (int k=0; k<=1; k++){
		bin[i][j]=k;
		if (j==3){
			if (i==3){
				if (Test()){
					t=1;
					if (d<bestconfig) bestconfig=d;
				} 
			}
			else Try(i+1, 0);
			
		}
		else Try(i, j+1);
	}
}

int main(){
	for (int i=0; i<4; i++) cin>>input[i];
	Try(0, 0);
	if (t==0) cout<<"Impossible";
	else cout<<bestconfig;
//	cout<<check(input);
	return 0;
}
//https://www.spoj.com/PTIT/problems/P146PROA/
