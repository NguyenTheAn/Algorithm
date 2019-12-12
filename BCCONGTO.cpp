#include <bits/stdc++.h>

using namespace std;

long long toInt(string s){
	long long sum=0;
	int n = s.length();
	for (int i=0; i<n; i++){
		sum=(sum*10+s[i]-'0');
	}
	return sum;
}


int main(){
	while (1){
		string s;
		cin>>s;
		if (s=="0") return 0;
		int n = s.length();
		long long sum=0;
		long long mem=0;
		if (s[0]>'4') sum = pow(10, n-1) + pow(10, n-2)*(s[0]-'1'), mem = s[0] - '1';
		else sum = pow(10, n-2)*(s[0]-'0'), mem = s[0]-'0';
		for (int i=1; i<n; i++){
			if (s[i]>'4') {
				sum+=pow(10, n-i-1);
				if (i!=n-1) {
					mem *= 9;
					mem+=(s[i]-'1');
					sum+=(pow(10, n-i-2)*mem);
				}
			}
			else {
				if (i!=n-1){
					mem *= 9;
					mem+=(s[i]-'0');
					sum+=pow(10, n-i-2)*mem;
				} 
			}
		}
		cout<<s<<": "<<toInt(s)-sum<<endl;
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/BCCONGTO/
