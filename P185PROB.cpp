#include <bits/stdc++.h>
using namespace std;

struct LINE{
	int a;
	int b;
	int c;
};

bool ss(int a, int b, int x, int y){
	return a*y==b*x;
}

bool cmp(LINE x, LINE y){
	return (ss(x.a, y.a, x.b, y.b) && (ss(x.a, y.a, x.c, y.c)) && ss(x.c, y.c, x.b, y.b));
}

int main(){
	int n, x0, y0;
	cin>>n>>x0>>y0;
	LINE line[10000];
	bool dd[100000];
	for (int i=0; i<1000; i++){
		dd[i]=0;
	}
	for (int i=0; i<n; i++){
		int x, y;
		cin>>x>>y;
		line[i].a=(y0-y);
		line[i].b=(x-x0);
		line[i].c=-((y0-y)*x0+(x-x0)*y0);
	}
	int d=0;
	for (int i=0; i<n; i++){
		if (dd[i]==0){
			d++;
			for (int j=i; j<n; j++){
				if (cmp(line[i], line[j])==1) {
					dd[j]=1;
				}
			}
		}
	}
	cout<<d;
	return 0;
}
//http://www.spoj.com/ACMPTIT/problems/P185PROB/
