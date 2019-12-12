#include <bits/stdc++.h>

using namespace std;

int dd[1001][1001];

bool Process(int n){
	vector <int> v1;
	vector <int> v2; 	
	for (int i=1; i<=n; i++){
		bool check1=1;
		bool check2=1;
		for (int j=0; j<v1.size(); j++){
			if (dd[i][v1[j]]==1){
				check1=0;
			}
		}
		for (int j=0; j<v2.size(); j++){
			if (dd[i][v2[j]]==1){
				check2=0;
			}
		}
		if (!check1 && !check2) return 0;
		if (check1 && !check2) v1.push_back(i);
		if (!check1 && check2) v2.push_back(i);
		if (check1 && check2) v1.push_back(i);
	}
	return 1;
}

int main(){
	while (1){
		int n;
		cin>>n;
		if (n==0) return 0;
		for (int i=1; i<=n; i++){
			for (int j=1; j<=n; j++) 
			cin>>dd[i][j];
		}
		if (Process(n)) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

