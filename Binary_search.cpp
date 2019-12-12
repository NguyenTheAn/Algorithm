#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[100000]={0}, i;
    cin>>n;
    for (i=0; i<n; i++){
    	a[i]=i+1;
	} // khoi tao mang gia tri
	i=0;
	int x, dau=0,cuoi=n-1;
	cin>>x; //nhap phan tu can tim
	while (1){
		i=(dau+cuoi)/2;
		if (a[i]==x){
			cout<<"YES\nphan tu thu "<<i+1;
			return 0;
		}
		if (a[i]>x){
			cuoi=i-1;
		}
		else{
			dau=i+1;
		}
		if (dau==cuoi) break;
	}
	cout<<"NO\n";
	return 0;
}

