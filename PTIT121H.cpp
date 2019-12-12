//#include<bits/stdc++.h>
#include <iostream>
#include <deque>
using namespace std;


int main(){
	deque <int> dq;
	int m, k;
	cin>>m>>k;
	char s[1000000];
	cin>>s;
	for (int i=0; i<m; i++){
		dq.push_back(i);
	}
	for (int i=0; s[i]!='.'; i++){
		if (s[i]=='A'){
			int x = dq.front();
			dq.pop_front();
			dq.push_back(x);
		}
		if (s[i]=='B'){
			int x, y;
			x=dq.front();
			dq.pop_front();
			y=dq.front();
			dq.pop_front();
			dq.push_front(x);
			dq.push_back(y);
		}
	}
	cout<<dq[k-1]<<" "<<dq[k]<<" "<<dq[k+1];
	return 0;
}

//http://www.spoj.com/PTIT/problems/PTIT121H/
