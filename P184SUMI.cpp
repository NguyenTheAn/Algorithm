#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define LL long long

struct Matrix{
	LL a11;
	LL a12;
	LL a21;
	LL a22;
};

Matrix operator* (Matrix m1, Matrix m2){
	Matrix m;
	m.a11 = ((m1.a11*m2.a11)%MOD+(m1.a12*m2.a21)%MOD)%MOD;
	m.a12 = ((m1.a11*m2.a12)%MOD+(m1.a12*m2.a22)%MOD)%MOD;
	m.a21 = ((m1.a21*m2.a11)%MOD+(m1.a22*m2.a21)%MOD)%MOD;
	m.a22 = ((m1.a21*m2.a12)%MOD+(m1.a22*m2.a22)%MOD)%MOD;
	return m;
}

Matrix Power(Matrix m, LL n){
	if (n==1) return m;
	if (n%2==0){
		Matrix tmp = Power(m, n/2);
		return tmp * tmp;	
	}
	else{
		Matrix tmp = Power(m, n-1);
		return tmp*m;
	}
}

int main (){
	LL k;
	cin>>k;
	Matrix base = {0, 1, 1, 1};
	Matrix m = Power(base, k);
	cout<<m.a12;
//	cout<<m.a11<<" "<<m.a12<<endl<<m.a21<<" "<<m.a22;
	return 0;
}
//https://www.spoj.com/ACMPTIT/problems/P184SUMI/
