#include <bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
		int n;
		cin>>n;
		if (n<3) cout<<n*n<<endl;
		else if (n%2==0) cout<<n*n/2<<endl;
				else cout<<n*n/2+1<<endl;
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT013D/
