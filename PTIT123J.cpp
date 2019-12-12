#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack <char> s1;
	string str;
	bool check=true;
	while (1){
		check=true;
		getline(cin, str);
		if (str[0]=='.') break;
		int n=str.length();
		while (!s1.empty()){
			s1.pop();
		}
		for (int i=0; i<n; i++){
			if (str[i]=='(') s1.push ('(');
			if (str[i]==')') {
				if (!s1.empty() && s1.top()=='(') s1.pop();
					else check=false;
			}
			if (str[i]=='[') s1.push ('[');
			if (str[i]==']') {
				if (!s1.empty() && s1.top()=='[') s1.pop();
					else check=false;
			}
		}
		if (s1.empty()&&check) cout<<"yes\n";
			else cout<<"no\n";
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT123J/
