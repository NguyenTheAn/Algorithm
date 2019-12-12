#include <iostream>
using namespace std;

int main()
{
	int n, a[1001]={0}, b[1001]={0}, c[1000]={0}, max =0, d=0;
		cin>>n;
	for (int i=0; i<n; i++){
		cin>>a[i];
		b[a[i]]++;
	}
	for (int i=0; i<n; i++){
		if (b[a[i]]>max) max=b[a[i]];
	}
	for (int i=0; i<max; i++){
		for (int j=1; j<1001; j++){
			if (b[j]>0){
				c[d]=j;
				b[j]--;
				d++;
			}
		}
	}
	d=0;
	for (int i=0; i<n-1; i++){
		if (c[i+1]>c[i]) d++;
	}
	cout<<d;
	return 0;
}


