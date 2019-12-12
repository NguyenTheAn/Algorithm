#include <bits/stdc++.h>
using namespace std;

typedef pair <int, int> ii;


int main(){
	int n;
	cin>>n;
	map <ii, int> m;
	while (n--){
		int a, b;
		cin>>a>>b;
		m[ii(a, b)]++;
	}
	int max = -1;
	map <ii, int>::iterator it;
	for (it = m.begin(); it!=m.end(); it++){
		if (it->second > max) max = it->second;
	}
	cout<<max;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P145PROF/
