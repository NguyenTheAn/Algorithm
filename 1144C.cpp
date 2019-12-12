#include <bits/stdc++.h>
using namespace std;

int dd[200001];

int main(){
	int n;
	cin>>n;
	int a[200001];
	for (int i=0; i<n; i++) {
		cin>>a[i];
		dd[a[i]]++;
	}
	vector <int> inc, dec;
	bool flag = 0;
	for (int i=0; i<200001; i++){
		if (dd[i] > 2) {
			flag = 1;
			break;
		}
		if (dd[i]) {
			inc.push_back(i);
			dd[i]--;
		}
	}
	if (flag) {
		cout<<"NO";
		return 0;
	}
	for (int i=200000; i>=0; i--){
		if (dd[i]){
			dec.push_back(i);
		}
	}
	cout<<"YES\n";
	cout<<inc.size()<<endl;
	for (int i=0; i<inc.size(); i++){
		cout<<inc[i]<<" ";
	}
	cout<<endl<<dec.size()<<endl;
	for (int i=0; i<dec.size(); i++){
		cout<<dec[i]<<" ";
	}
	return 0;
}
//https://codeforces.com/contest/1144/problem/C
