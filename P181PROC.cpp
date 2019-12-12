#include <iostream>
#include <algorithm>
#include <string.h>
#define LL long long
using namespace std;

int main (){
	LL n,k;
	cin>>n>>k;
	bool used[100000];
	memset(used, 0, sizeof used);
	for (int i=1; i<=k; i++){
		if (used[n%i]==1){
			cout<<"No";
			return 0;
		}
		else used[n%i]=1;
	}
	cout<<"Yes";
	return 0;
}
//http://www.spoj.com/PTIT/problems/P181PROC/
