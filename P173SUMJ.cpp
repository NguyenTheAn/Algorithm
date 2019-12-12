#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
bool cmp(int a, int b){
	return a>b;
}

int main() {
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
		int n, dd[1000], kq=0;
		memset(dd, 0, sizeof dd);
		cin>>n;
		for (int i=0; i<n; i++){
			int x;
			cin>>x;
			dd[x]++;
		}
		sort(dd, dd + 1000, cmp);
		int check = 2;
		for (int i=0; i<1000; i++){
			if (dd[i] >= 4){
				kq += dd[i] / 4;
				dd[i] %= 4;
			}
			if (dd[i] >= 2){
				dd[i] -= 2;
				if (check == 1){
					kq++;
					check = 0;
					continue;
				}
				if (check == 0){
					check = 1;
					continue;
				}
				if (check == 2) 
					check = 1;
			}
		}
		cout<<kq<<endl;
	}
}
//http://www.spoj.com/PTIT/problems/P173SUMJ/ 
