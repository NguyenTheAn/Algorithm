#include <bits/stdc++.h>

using namespace std;

stack <char> s;

void in(){
	if (s.empty()) return ;
	char tmp = s.top();
	s.pop();
	in();
	cout<<tmp;
}


int main(){
	int n, k;
	cin>>n>>k;
	for (int i=0; i<n; i++){
		char a;
		cin>>a;
		if (!s.empty()){
			while (!s.empty() && a>s.top() && k!=0){
				s.pop();
				k--;
			}
		}
		s.push(a);
	}
	in();
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT125I/
