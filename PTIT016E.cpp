#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int Max(int a, int b){
	return a > b ? a : b;
}
main() {
	int n;
	cin>>n;
	long long s[101][101];
	for (int i=0; i<n; i++){
		for (int j=0; j<11; j++){
			cin>>s[i][j];
		}
	}
	long long max = 0, tmp;
	for (int i = 0; i < n-2; i++){
		for (int j = i+1; j < n-1; j++){
			for (int k = j+1; k < n; k++){
				tmp = 0;
				for (int l = 0; l < 11; l++){
					tmp += Max(s[i][l], Max(s[j][l], s[k][l]));
				}
				if (tmp > max){
					max = tmp;
				}
			}
		}
	}
	cout<<max;
} 
//http://www.spoj.com/PTIT/problems/PTIT016E/
