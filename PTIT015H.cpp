#include <iostream>
#include <algorithm>
using namespace std;
void reserve(string &s){
	int n = s.length();
	for (int i=0; i<n/2; i++){
		swap(s[i], s[n-i-1]);
	}
}
string whatever(int n){
	string s = "";
	while (n!=0){
		int tmp = n%10;
		s += tmp + '0';
		n /= 10;
	}
	reserve(s);
	return s;
}

main() {
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
		int n;
		cin>>n;
		string s = "", s1 = "";
		for (int i=1; i<=n; i++){
			s += whatever(i);
		}
		while (1){
			int len = s.length();
			if (len == 1){
				cout<<s<<endl;
				break;
			}
			for (int i=0; i <= len; i+=2){
				if (s[i] >= '0' && s[i] <= '9')
					s1 += s[i];
			}
			s = "";
			len = s1.length();
			if (len == 1){
				cout<<s1<<endl;
				break;
			}
			for (int i=1; i<=len; i+=2){
				if (s1[i] >= '0' && s1[i] <= '9')
					s += s1[i];
			}
			s1 = "";
		}
	}
} 
//http://www.spoj.com/PTIT/problems/PTIT015H/
