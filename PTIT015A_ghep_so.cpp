#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
		string s, kq = "";
		for (int i=0; i<3; i++){
			cin>>s;
			kq += s;
		}
		int n = kq.length();
		for (int i=0; i<n-1; i++){
			for (int j = i+1; j<n; j++){
				if (kq[i] < kq[j]) swap(kq[i], kq[j]);
			}
		}
		cout<<kq<<endl;
	}
}


