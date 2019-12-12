#include <iostream>
#include <cmath>
using namespace std;
main()
{
	int A[2],B[2],C[2];
	cin>>A[0]>>A[1];
	cin>>B[0]>>B[1];
	cin>>C[0]>>C[1];
	if (A[0]==B[0]){
		if (A[1]==C[1]) cout<<C[0]-A[0]+B[0]<<" "<<C[1]-A[1]+B[1];
		else cout<<C[0]-B[0]+A[0]<<" "<<C[1]-B[1]+A[1];
		}
	if (A[0]==C[0]){
		if (A[1]==B[1]) cout<<B[0]-A[0]+C[0]<<" "<<B[1]-A[1]+C[1];
		else cout<<B[0]-C[0]+A[0]<<" "<<B[1]-C[1]+A[1];
		}
	if (C[0]==B[0]){
		if (A[1]==B[1]) cout<<A[0]-B[0]+C[0]<<" "<<A[1]-B[1]+C[1];
		else cout<<A[0]-C[0]+B[0]<<" "<<A[1]-C[1]+B[1];
		}
}

