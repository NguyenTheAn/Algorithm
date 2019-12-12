#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll    oo = 1000000000000000001ll;
ll          p[20] = {0,2,3,5,7,11,13,17,19,23,29};
ll          n, res = oo;


void process(int i, long long ans, int cnt){
	if (cnt>n) return ;
	if (cnt==n) res = min(res, ans); 
	for (int j=1; ; j++){
		if (ans*p[i]>res) break;
		ans*=p[i];
		if (ans<0) break;
		process(i+1, ans, cnt*(j+1));
	}
}

int main(){
		cin>>n;
		res = oo;
		process(1, 1, 1);
		cout<<res<<endl;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P163SUME/
