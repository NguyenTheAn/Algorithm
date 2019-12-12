#include <iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
		long n;
		bool check=true;
		cin>>n;
		long long h[n];
		for (int j=0; j<n; j++){
			cin>>h[j];
		}
		for (int j=0; j<n-1; j++){
		    long x;
            if (h[j+1]>h[j]) x=h[j+1]-h[j];
			if (h[j]>h[j+1]) x=h[j]-h[j+1];
			if (x%2!=0){
                check=false;
                break;
			}
		}
		if (check) cout<<"YES\n";
		else cout<<"NO\n";

	}
}

