#include <iostream>
using namespace std;
void in(int a[], int k){
	for (int i=1; i<=k; i++)
		cout<<a[i]<<" ";
		cout<<endl;
}

main()
{
	int n, k, a[100000];
	cin>>n>>k;
	for (int i=0; i<=n; i++){
		a[i]=i;
	}
	int check=1;
	do {
		int i=k;
		in(a, k);
		while (i>0 && a[i]==n+i-k) i--;
        a[i]++;
        if (i>0)
			for (int j=i+1; j<=n; j++){
				a[j]=a[j-1]+1;
			}
        else check=0;
	} while (check);
}

