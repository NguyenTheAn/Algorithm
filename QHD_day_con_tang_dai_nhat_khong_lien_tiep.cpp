#include <iostream>
using namespace std;

int main()
{
	int n,a[100000], b[100000]={0}, max=0;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
//	for (int i=0; i<n; i++){
//		b[i]=0;
//	}
	for (int i=0; i<n; i++){
        max=0;
		for (int j=i; j>=0; j--){
			if ((a[j]<a[i]) && (b[j]>max)) max=b[j];
		}
		b[i]=max+1;
	}
	max=0;
	for (int i=0; i<n; i++){
		if (b[i]>max) max=b[i];
	}
	cout<<max;
	return 0;
}

