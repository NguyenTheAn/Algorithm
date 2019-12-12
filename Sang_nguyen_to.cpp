#include<iostream>
#include<math.h>
using namespace std;
int a[1000000];

int main()
{
	int n,k, tmp;
	cin>>n>>k;

	for (int i=2; i<=n; i++){
			for (int j=i; j<=n; j+=i){
			   if (a[j]==0){
					a[j]=i;
					k--;
					tmp=j;
			   }
			   if (k==0){
                cout<<tmp;
                return 0;
			   }
			}
		}
	return 0;
}

