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
	int Max = INT_MIN, cnt;
	for (int i=0; i<200001; i++){
		if (dd[i] > Max){
			Max = dd[i];
			cnt = i;
		}
	}
	if (Max == n){
		cout<<0;
		return 0;
	}
	int pos = 0;
	for (int i=0; i<n; i++){
		if (a[i] == cnt){
			pos = i;
			break;
		}
	}
	cout<<n - Max<<endl;
	for (int i = pos - 1; i>=0; i--){
		if (a[i] > cnt){
			cout<<"2 "<<i+1<<" "<<i+2<<endl;
		}
		if (a[i] < cnt) cout<<"1 "<<i+1<<" "<<i+2<<endl;
	}
	for (int i = pos + 1; i<n; i++){
		if (a[i] > cnt){
			cout<<"2 "<<i+1<<" "<<i<<endl;
		}
		if (a[i] < cnt) cout<<"1 "<<i+1<<" "<<i<<endl;
	}
	return 0;
}
//https://codeforces.com/contest/1144/problem/D
