#include <iostream>
#include <algorithm>
#include <limits.h>

const long long MOD=1000000007;
using namespace std;
long long Pow[1000000];
long long hashT[1000000];

long long getHash(int i, int j){
	return (hashT[j] - hashT[i-1]*Pow[j-i+1] + MOD*MOD)%MOD;
}

int main(){
	//	freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
	string s, p;
	cin>>s>>p;
	int m=s.length(), n=p.length();
	s=" "+s;
	p=" "+p;
	Pow[0]=1;
	for (int i=1; i<=m; i++){
		Pow[i] = (Pow[i-1]*26) % MOD;
	}
	hashT[0]=0;
	for (int i=1; i<=m; i++){
		hashT[i]=(hashT[i-1]*26 + s[i] - 'a') % MOD;
//		cout<<hashT[i]<<" ";
	}
	long long hashP=0;
	for (int i=1; i<=n; i++){
		hashP=(hashP*26 + p[i] - 'a') % MOD;
	}
//	cout<<endl<<hashP;
	for (int i=1; i<=m-n+1; i++){
//		cout<<endl<<hashP<<" "<<getHash(i, i+n-1);
		if (hashP==getHash(i, i+n-1)) cout<<i;
	}
	return 0;
}
