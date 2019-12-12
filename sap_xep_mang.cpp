#include <iostream>
using namespace std;

main(){
	long n;
	cin>>n;
	long array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int index;
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (array[i]>array[j]){
				index=array[i];
				array[i]=array[j];
				array[j]=index;
				}
			}
		}
	for (int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
}
