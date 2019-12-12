#include <iostream>
#include <algorithm>
using namespace std;
bool stop_condition(long long a[]){
	for (int i=0; i<4; i++){
		if (a[i]!=0) return 0;
	}
	return 1;
}
long long abs(int a, int b){
	return a>b ? a-b : b-a;
}
bool check(long long a[]){
	for (int i=0; i<3; i++){
		if (a[i]!=a[i+1]) return 0;
	}
	return 1;
}

main() {
	while (1){
		long long a[10], count=0;
		for (int i=0; i<4; i++){
			cin>>a[i];
		}
		if (stop_condition(a)) break;
		a[4]=a[0];
		while (1){
			if (check(a)) {
				cout<<count<<endl;
				break;
			}
			for (int i=0; i<4; i++){
				a[i]=abs(a[i+1], a[i]);
			}
			a[4]=a[0];
			count++;
		}
	}
} 
//http://www.spoj.com/PTIT/problems/PTIT137A/
