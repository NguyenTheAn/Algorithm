#include <bits/stdc++.h>

using namespace std;

int main(){
	long long c;
	int k;
	cin>>c>>k;
	long long min=1;
	for (int i=0; i<k; i++) min*=10;
	long long lower = (c/min)*min;
	long long upper = (c/min+1)*min;
	if ((c-lower)<(upper-c)) cout<<lower;
	else cout<<upper;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P136SUMD/
