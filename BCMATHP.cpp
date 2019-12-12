#include <bits/stdc++.h>

using namespace std;

int main(){
	int kq[]={0, 2, 4, 8, 1, 3, 6, 1, 2, 5, 1, 2, 4, 8, 1, 3, 6, 1, 2, 5, 1, 2, 4, 8, 1, 3, 6, 1, 2, 5, 1, 2, 
		4, 8, 1, 3, 6, 1, 2, 5, 1, 2, 4, 8, 1, 3, 7, 1, 2, 5, 1, 2, 4, 9, 1, 3, 7, 1, 2, 5, 1, 2, 4, 9, 1};
	int a, b;
	cin>>a>>b;
	for (int i=a+1; i<=62; i++){
		if (kq[i]==b){
			cout<<i;
			return 0;
		}
	}
	cout<<"0";
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCMATHP/
