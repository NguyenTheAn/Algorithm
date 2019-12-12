#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <math.h>
using namespace std;
void abc(int &c){
	c++;
}
void day_fibonanci(int);
bool so_nguyen_to(unsigned int);
void swap(int &,int &);
int tinh_tien_taxi(int );
int tinh_tong_cac_chu_so(int );
int chia(long n, long ar[], int x){
		int du=0;
		for (int i=0; i<x; i++){
			du=du*10 + ar[i];
			if (du>n){
				du=du%n;
			}
		}
	return du;
}

int main()
{
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<" "<<b;
	return (0) ;
}

void day_fibonanci(int n){
	int x=0,y,idx=1;
	for (int i=0;i<n;i++){
		cout<<idx<<" ";
		y=idx;
		idx+=x;
		x=y;
	}
}
void swap(int &a, int &b){
	int c;
	c=a;
	a=b;
	b=c;
//	cout<<a<<" "<<b;
}
int tinh_tien_taxi(int km){
	int tien_taxi;
	if (km<=1) tien_taxi=km*5000;
	if (km<=30) tien_taxi= (km-1)*4000+5000;
	if (km>30){
		tien_taxi=5000+29*4000+(km-30)*3000;
	}
	return (tien_taxi);
}
int tinh_tong_cac_chu_so(int x){
	int tong=0;
	while(x!=0){
		tong+=x%10;
		x/=10;
	}
	return (tong);
}
bool so_nguyen_to(unsigned int n){
   	bool x=true;
   		if (n<2)
   		x=false;
   	if (n>=2){
   	for (int i=2;i<=sqrt(n);i++){
   		if (n%i==0){
		   	x=false;
		   	break;
		   }
		}
	}
	return (x);
}

