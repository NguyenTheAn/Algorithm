#include <bits/stdc++.h>
using namespace std;

int main(){
	int cnt1, cnt2, cnt3, cnt4;
	bool check=0;
	cin>>cnt1>>cnt2>>cnt3>>cnt4;
	if ( cnt1==0 && cnt4==0 && cnt3!=0) {
		cout<<"0";
		return 0;
	}
	if (cnt1 == cnt4){
		cout<<"1";
		return 0;
	}
	cout<<"0";
	return 0;
}

//https://codeforces.com/contest/1132/problem/A
