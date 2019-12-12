#include <bits/stdc++.h>
using namespace std;

int matrix[6][6];
void display(int a[6][6]){
	for (int i=1; i<=4; i++){
		for (int j=1; j<=4; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

void right(){
	for (int i=1; i<=4; i++){
		for (int j=4; j>0; j--){
			for (int k=j-1; k>0; k--){
				if (matrix[i][j]==matrix[i][k]) {
					matrix[i][j]+=matrix[i][k];
					matrix[i][k]=0;
					break;
				}
				else {
					if (matrix[i][k]!=0) break;
				}
			}
		}
		for (int j=4; j>0; j--){
			if (matrix[i][j]==0){
				for (int k=j; k>0; k--){
					if (matrix[i][k]!=0) {
						matrix[i][j]=matrix[i][k];
						matrix[i][k]=0;
						break;
					}
				}
			}
		}
	}
	display(matrix);
}

void left(){
	for (int i=1; i<=4; i++){
		for (int j=1; j<=4; j++){
			for (int k=j+1; k<=4; k++){
				if (matrix[i][j]==matrix[i][k]) {
					matrix[i][j]+=matrix[i][k];
					matrix[i][k]=0;
					break;
				}
				else {
					if (matrix[i][k]!=0) break;
				}
			}
		}
		for (int j=1; j<=4; j++){
			if (matrix[i][j]==0){
				for (int k=j; k<=4; k++){
					if (matrix[i][k]!=0) {
						matrix[i][j]=matrix[i][k];
						matrix[i][k]=0;
						break;
					}
				}
			}
		}
	}
	display(matrix);
}

void up(){
	for (int j=1; j<=4; j++){
		for (int i=1; i<=4; i++){
			for (int k=i+1; k<=4; k++){
				if (matrix[i][j]==matrix[k][j]) {
					matrix[i][j]+=matrix[k][j];
					matrix[k][j]=0;
					break;
				}
				else {
					if (matrix[k][j]!=0) break;
				}
			}
		}
		for (int i=1; i<=4; i++){
			if (matrix[i][j]==0){
				for (int k=i; k<=4; k++){
					if (matrix[k][j]!=0) {
						matrix[i][j]=matrix[k][j];
						matrix[k][j]=0;
						break;
					}
				}
			}
		}
	}
	display(matrix);
}

void down(){
	for (int j=1; j<=4; j++){
		for (int i=4; i>0; i--){
			for (int k=i-1; k>0; k--){
				if (matrix[i][j]==matrix[k][j]) {
					matrix[i][j]+=matrix[k][j];
					matrix[k][j]=0;
					break;
				}
				else {
					if (matrix[k][j]!=0) break;
				}
			}
		}
		for (int i=4; i>0; i--){
			if (matrix[i][j]==0){
				for (int k=i; k>0; k--){
					if (matrix[k][j]!=0) {
						matrix[i][j]=matrix[k][j];
						matrix[k][j]=0;
						break;
					}
				}
			}
		}
	}
	display(matrix);
}

int main()
{
	char move;
	cin>>move;
	for (int i=1; i<=4; i++){
		for (int j=1; j<=4; j++){
			cin>>matrix[i][j];
		}
	}
	switch (move){
		case 'R':{
			right();
			break;
		}
		case 'L':{
			left();
			break;
		}
		case 'U':{
			up();
			break;
		}
		case 'D':{
			down();
			break;
		}
	}
	return 0;
}
http://www.spoj.com/PTIT/problems/P161SUMD/
