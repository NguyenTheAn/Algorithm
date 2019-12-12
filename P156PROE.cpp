#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int search(char c, char s[]){
	for (int i=0; i<28; i++){
		if (s[i] == c) return i;
	}
	return -1;
}

main() {
	char xau[29] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
	while (1){
		int k;
		cin>>k;
		if (!k) break;
		char s[41];
		cin>>s;
		int n = strlen(s);
		for (int i=0; i<n/2; i++){
			swap(s[i], s[n-i-1]);
		}
		for (int i=0; i<n; i++){
			int tmp = search(s[i], xau);
			if (tmp+k < 28) {
				s[i] = xau[tmp+k];
			}
			else s[i] = xau[tmp+k-28];
		}
		cout<<s<<endl;
	}
} 
//http://www.spoj.com/PTIT/problems/P156PROE/
