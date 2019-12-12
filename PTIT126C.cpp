#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int j=0; j<t; j++){
		int n, k;
		int tong = 0, count = 0;
		int a[100000];
		cin>>n>>k;
		int min = n;
		for (int i=0; i<n; i++){
			cin>>a[i];
		}
		for (int i=0, j=0; i<n; i++){
			tong+=a[i];
			count++;
			if (tong>=k){
				if (count<min) min=count;
				while(tong>=k){
					tong-=a[j];
					count--;
					j++;
					if (tong>=k && count < min) min = count;
				}
			}
		}
		tong = 0;
		for (int i=0; i<n; i++){
			tong+=a[i];
		}
		if (tong<k) cout<<0<<endl;
		else cout<<min<<endl;
	}
}
//http://www.spoj.com/PTIT/problems/PTIT126C/
