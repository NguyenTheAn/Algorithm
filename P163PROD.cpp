#include <bits/stdc++.h>

using namespace std;

void Rev(int a[], int n){
	for (int i=0; i<n/2; i++){
		int tmp = a[i];
		a[i]=a[n-i-1];
		a[n-i-1] = tmp;
	}
}


int NumToChar(long long a, int s1[]){
	int d=0;
	while (a!=0){
		s1[d]=a%10;
		a/=10;
		d++;
	}
	Rev(s1, d);
	return d;
}

void Del(int a[], int &n, int i){
	for (int j=i; j<n-1; j++){
		a[j]=a[j+1];
	}
	n--;
}

long long CharToNum(int s[], int n){
	int a=0;
	for (int i=0; i<n; i++){
		a = a*10 + s[i];
	}
	return a;
}

int main(){
	long long a, b;
	cin>>a>>b;
	int sum = a+b;
	int s1[100], s2[100], s3[100];
	
	int n1 = NumToChar(a, s1);
	int n2 = NumToChar(b, s2);
	int n3 = NumToChar(sum, s3);
	for (int i=0; i<n1; i++){
		if (s1[i]==0) Del(s1, n1, i);
	}
	for (int i=0; i<n2; i++){
		if(s2[i]==0) Del(s2, n2, i);
	}
	for (int i=0; i<n3; i++){
		if (s3[i]==0) Del(s3, n3, i);
	}
	if (CharToNum(s1, n1) + CharToNum(s2, n2) == CharToNum(s3, n3)) cout<<"YES";
	else cout<<"NO";
	return 0;
}
//https://www.spoj.com/PTIT/problems/P163PROD/
