#include <iostream>
#include <string>
using namespace std;


main()
{
	int n;
	cin>>n;
	int arr[300001];
	for (int i=1; i<=n; i++){
		cin>>arr[i];
	}
	int count=0;
	for (int i=n, j=n; i>=1; i--){
		if (arr[i]==j){
			j--;
		}
		else count++;
	}
	cout<<count;
}  
//http://www.spoj.com/PTIT/problems/PTIT127F/
