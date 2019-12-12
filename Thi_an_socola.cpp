#include<iostream>
#include<math.h>
using namespace std;
int a[100000];
int main()
{
	int n,i=0, j,dem1=0, dem2=0;
	cin>>n;
	j=n-1;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	if (n==1){
		cout<<"1 0";
		return 0;
	}
	while (1){
		if (j-i==1){
			dem1++;
			dem2++;
			break;
		}
		if (a[i]==a[j]){
			i++;
			dem1++;
			j--;
			dem2++;
		}
		else
		if (a[i]>a[j]){
			a[i]-=a[j];
			j--;
			dem2++;
		}
		else
		if(a[j]>a[i]){
			a[j]-=a[i];
			i++;
			dem1++;
		}
		if (i==j){
			dem1++;
			break;
		}
	}
	cout<<dem1<<" "<<dem2;
	return 0;
}

