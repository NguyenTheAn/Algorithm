#include <bits/stdc++.h>
using namespace std;

string change(int n){
	string res="";
	while (n!=0){
		res += (n%10 + '0');
		n/=10;
	}
	res+="00";
	return res;
}

int main(){
	string s;
	cin>>s;
	int hh1 = (s[0]-'0')*10 + (s[1]-'0');
	int mm1 = (s[3]-'0')*10 + (s[4]-'0');
	cin.ignore();
	cin>>s;
	int hh2 = (s[0]-'0')*10 + (s[1]-'0');
	int mm2 = (s[3]-'0')*10 + (s[4]-'0');
	int resh = hh1 + (hh2 - hh1) / 2;
	int resm = mm1 + (mm2 - mm1) / 2;
	if ((hh2-hh1) % 2 != 0){
		resm += 30;
		if (resm>=60){
			resm -= 60;
			resh++;
		}
	}
	string kq1 = change(resh);
	string kq2 = change(resm);
	cout<<kq1[1]<<kq1[0]<<":"<<kq2[1]<<kq2[0];	
	return 0;
}
//https://codeforces.com/contest/1133/problem/A
