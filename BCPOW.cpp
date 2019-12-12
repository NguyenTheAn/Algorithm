#include <iostream>
#include <string.h>
using namespace std;
void nhan1so(char [], int );
void in(char []);
void tong(char a[], char b[], int n);
void xoa(char a[]);
void xuli(char a[], char b[]);
char c[1000];
int main()
{
	int n, m;
	cin>>n>>m;
	char a[1000]="1", b[1000]="1";
	for (int i=0; i<n; i++){
		nhan1so(a, 2);
	}
	for (int i=0; i<m; i++){
		nhan1so(b, 3);
	}
	xoa(a), xoa(b);
	xuli(a, b);
	tong(a, b, strlen(a));
	xoa(c);
	cout<<c[0];
}

void nhan1so(char a[], int x){
	int n=strlen(a), mem=0, tmp;
	for (int i=n-1; i>=0; i--){
		tmp=x * (a[i]-'0') +mem;
		if (tmp>=10){
			a[i+1]=tmp%10 + '0';
			mem=tmp/10;
		}
		else{
			mem=0;
            a[i+1]=tmp + '0';
		}
		if (i==0 && mem!=0) a[0]=mem+'0';
		else if (i==0) a[0]='0';
	}
}

void in(char a[]){
	bool check=0;
	for (int i=0; i<strlen(a); i++){
//		if (a[i]!='0') check=1;
		if (!check) cout<<a[i];
	}
	cout<<endl;
}

void tong(char a[], char b[], int n){
	
	memset(c, '0', n+1);
	int tmp, mem=0;
	for (int i=n-1; i>=0; i--){
		tmp=a[i]-'0' + b[i]-'0'+mem;
		mem=tmp/10;
		c[i+1]=tmp%10+'0';
		if (i==0 && tmp>=10) c[i]='1';
	}
}

void xoa(char a[]){
	int n=strlen(a);
	while (a[0]=='0'){
		for (int i=0; i<n-1; i++){
			a[i]=a[i+1];
		}
		a[n-1]='\0';
		n--;
	}
}

void xuli(char a[], char b[]){
	int na=strlen(a), nb=strlen(b), check;
	if (na>nb) check=1;
	if (na<nb) check=0;
	if (check==1) {
		int t=na-nb;
		for (int i=nb-1; i>=0; i--){
			b[i+t]=b[i];
		}
		for (int i=0; i<t; i++){
			b[i]='0';
		}
	}
	else {
		int t=nb-na;
		for (int i=na-1; i>=0; i--){
			a[i+t]=a[i];
		}
		for (int i=0; i<t; i++){
			a[i]='0';
		}
	}
}
//http://www.spoj.com/PTIT/problems/BCPOW/
