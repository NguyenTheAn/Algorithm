#include <bits/stdc++.h>
using namespace std;

//trung to sang hau to

int Precedence(char x) // do uu tien toan tu
{
	if (x == '(')
		return 0;
	if (x == '+' || x == '-')
		return 1 ;
	if (x == '*' || x == '/' || x == '%')
		return 2;
	return 3;
}

int main() {
	string s;
	while (cin>>s){
		string out="";
		stack <char> a;
		int n = s.length();
		for (int i=0; i<n; i++){
			
			if (s[i]>='a' && s[i]<='z') out+=s[i];
			else 
				if (s[i]=='('){
						a.push(s[i]);
				}
				else 
					if (s[i]==')'){
						while (a.top()!='('){
							out+=a.top();
							a.pop();
						}
						a.pop();
					}
					else 
					{
						while (!a.empty())
						{
							if ((Precedence(s[i]) <= Precedence(a.top()))){
								out+=a.top();
								a.pop();
							}
							else break;
						}
						a.push(s[i]);
					}
		}
		while (!a.empty()){
			out+=a.top();
			a.pop();
		}
		cout<<out<<endl;
	}
	return 0;
}
