#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
	//counting sort
	int dd[100000];
	memset(dd, 0, sizeof dd);
	int n, x;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>x;
		dd[x]++;
	}
	for (int i=0; i<100000; i++){
		for (int k=0; k<dd[i]; k++){
			cout<<i<<" ";
		}
	}
}
