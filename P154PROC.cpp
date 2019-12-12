#include<bits/stdc++.h>
using namespace std;

int a[20][20];

int main(){
	int n;
	cin>>n;
	cout<<"+------------------------+\n";
	for (int j=1; j<=11; j++){
		for (int i=1; i<=4; i++){
			if (n==0) break;
			if (i==3 && j!=1) continue;
			a[i][j]=1;
			n--;
		}
	}
	for (int i=1; i<=4; i++){
		cout<<"|";
		for (int j=1; j<=11; j++){
			if (a[i][j]==1) cout<<"O.";
			else if (i==3 && j!=1) cout<<"..";
					else cout<<"#.";
		}
		if (i!=3) cout<<"|";
		else cout<<".";
		if (i==1) cout<<"D|)";
		else cout<<".|";
		if (i==4) cout<<")";
		cout<<endl;
	}
	cout<<"+------------------------+";
	return 0;
}
//http://www.spoj.com/PTIT/problems/P154PROC/
