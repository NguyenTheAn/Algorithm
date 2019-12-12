#include <bits/stdc++.h>
using namespace std;

vector <long long> v;
char d = 'a';

int Precedence (char c){
	if (c == '(') return 0;
	if (c == '*' || c == '/' || c == '%') return 2;
	if (c == '+' || c == '-') return 1;
	return 3;
}

long long change(int i, string s){
	queue <long long> qu;
	int n = s.length();
	while ( i < n && s[i] >= '0' && s[i] <= '9'){
		qu.push(s[i] - '0');
		i++;
	}
	long long x = 0;
	while (!qu.empty()){
		x = x*10 + qu.front();
		qu.pop();
	}
	return x;
}

string postFix(string s){
	string out = "";
	stack <char> st;
	int n = s.length();
	for (int i=0; i<n; i++){
		if (s[i] == '(') st.push(s[i]);
		else
			if (s[i] >= '0' && s[i] <= '9'){
				if (i==0 || s[i-1] < '0' || s[i-1] > '9'){
					long long tmp = change(i, s);
					v.push_back(tmp);
					out += d;
					d++;
				}
			}
			else
				if (s[i] == ')'){
					while (!st.empty() && st.top() != '('){
						out += st.top();
						st.pop();
					}
					st.pop();
				}
				else {
					while (!st.empty()){
						if (Precedence(s[i]) <= Precedence(st.top())) {
							out += st.top();
							st.pop();
						} 
						else break;
					}
					st.push(s[i]);
				}
	}
	while (!st.empty()){
		out += st.top();
		st.pop();
	}
	return out;
}

long long cal(long long a, long long b, char c){
	if (c == '*') return a*b;
	if (c == '+') return a+b;
	if (c == '-') return a-b;
	if (c == '/') return a/b;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		v.clear();
		d = 'a';
		string s;
		cin>>s;
		string tmp = postFix(s);
		int n = tmp.length();
		if (n==1) {
			cout<<v[0]<<endl;
			continue;
		}
		stack <long long> st;
		long long res = 0;
		for (int i=0; i<n; i++){
			if (tmp[i] >= 'a' && tmp[i] <= 'z'){
				st.push(v[tmp[i] - 'a']);
			}
			else {
				long long b = st.top(); st.pop();
				long long a = st.top(); st.pop();
				res = cal(a, b, tmp[i]);
				st.push(res);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTITCALE/
