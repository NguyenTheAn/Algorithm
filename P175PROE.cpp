#include <bits/stdc++.h>
using namespace std;

int tinh_tong_cac_chu_so(int );

int main()
{
	char s[1000000];
	cin>>s;
	int d=1;
	int tmp=0;
	int n=strlen(s);
	if (n<2) {
		cout<<0;
		return 0;
	}
	for (int i=0; i<n; i++){
		tmp+=s[i]-'0';
	}
	while (tmp>=10){
		tmp=tinh_tong_cac_chu_so(tmp);
		d++;
	}
	cout<<d;
	return 0;
}

int tinh_tong_cac_chu_so(int x){
	long tong=0;
	while(x!=0){
		tong+=x%10;
		x/=10;
	}
	return (tong);
}
//http://www.spoj.com/PTIT/problems/P175PROE/
