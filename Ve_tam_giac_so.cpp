#include <iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	for (int i=0;i<=n;i++){
		for (int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for (int k=0;k<=i;k++){
			cout<<k;
		}
		for (int k=i-1;k>=0;k--){
			cout<<k;
		}
		for (int j=n-i;j>=0;j--){
			cout<<" ";
		}
		cout<<endl;
	}
	for (int i=n-1;i>=0;i--){
		for (int j=0;j<n-i;j++){
			cout<<" ";
		}
		for (int k=0;k<=i;k++){
			cout<<k;
		}
		for (int k=i-1;k>=0;k--){
			cout<<k;
		}
		for (int j=n-i;j>=0;j--){
			cout<<" ";
		}
		cout<<endl;
	}
}
