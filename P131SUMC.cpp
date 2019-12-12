#include <bits/stdc++.h>

using namespace std;

double Value(int a, int b, int c, int d){
	double x = a*1.0/c;
	double y = b*1.0/d;
	return x>y ? x-y : y-x; 
}

int main(){
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	double x[] = {Value(a, b, c, d), Value(c, a, d, b), Value(d, c, b, a), Value(b, d, a, c)};	
	int max = 0;
	for (int i=0; i<4; i++){
		if (x[max]<x[i]){
			max=i;
		}
	}
	cout<<max;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P131SUMC/
