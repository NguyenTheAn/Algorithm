#include <bits/stdc++.h>

using namespace std;


struct Giavi{
	long long S;
	long long B;
};

Giavi giavi[100];
long long bestconfig=INT_MAX;
long long S=1, B=0, n;
int check=0;

long long abs(long long a, long long b){
	return a>b ? a - b : b - a;
}

long long Try(long long i){
	for (long long j=0; j<=1; j++){
		if (j) S=S*j*giavi[i].S;
		B=B+j*giavi[i].B;
		if (i==n-1 ){
			long long x = abs(S, B);
			if (bestconfig > x && check == 1){
				bestconfig = x;
			}	
			if (check==0) check=1;
		}
		else Try(i+1);
	}
	S/=giavi[i].S;
	B-=giavi[i].B;
}

int main(){
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>giavi[i].S>>giavi[i].B;
	}
	Try(0);
	cout<<bestconfig;
	return 0;
}
