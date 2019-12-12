#include <bits/stdc++.h>
using namespace std;

struct SHOT {
	int line;
	int pos;
};

int main(){
	int n;
	cin>>n;
	int a[1000];
	for (int i=1; i<=n; i++){
		cin>>a[i];
	}
	SHOT shot[1000];
	int m;
	cin>>m;
	for (int i=0; i<m; i++){
		cin>>shot[i].line>>shot[i].pos;
	}
	for (int i=0; i<m; i++){
		if (shot[i].line==1) {
			a[shot[i].line+1]=a[shot[i].line+1]+a[shot[i].line]-shot[i].pos;
			a[shot[i].line]=0;
			continue;
		}
		if (shot[i].line==n){
			a[shot[i].line-1]=a[shot[i].line-1]+shot[i].pos-1;
			a[shot[i].line]=0;
			continue;
		}
		a[shot[i].line+1]=a[shot[i].line+1]+a[shot[i].line]-shot[i].pos;
		a[shot[i].line-1]=a[shot[i].line-1]+shot[i].pos-1;
		a[shot[i].line]=0;
	}
	for (int i=1; i<=n; i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
//http://www.spoj.com/ACMPTIT/problems/P186PROB/
