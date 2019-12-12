#include <bits/stdc++.h>
using namespace std;

int food[] = {0, 0, 1, 2, 3, 1, 3, 2, 1};

int count(int day, int a, int b, int c){
	int d = 0;
	while (1){
		if (food[day] == 1) a--;
		if (food[day] == 2) b--;
		if (food[day] == 3) c--;
		if (a < 0 || b < 0 || c < 0) break;
		day++;
		d++;
		if (day > 8) day -= 7;
	}
	return d;
}

int main(){
	ios_base::sync_with_stdio(false);
	int a, b, c;
	cin>>a>>b>>c;
	int tmp = a/3;
	tmp = min(tmp, b/2);
	tmp = min(tmp, c/2);
	a -= tmp * 3;
	b -= tmp * 2;
	c -= tmp * 2;
	long long res = tmp * 7;
	tmp = -1;
	for (int i=2; i<=8; i++){
		tmp = max(tmp, count(i, a, b, c));
	}
	cout<<res + tmp;
	return 0;
}
//https://codeforces.com/contest/1154/problem/C
