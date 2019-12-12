#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int radiant[200000];
	int dire[200000];
	for (int i=0; i<n; i++){
		cin>>radiant[i];
	}
	for (int i=0; i<n; i++){
		cin>>dire[i];
	}
	sort(radiant, radiant+n);
	sort(dire, dire+n);
	int count=0;
	for (int i=0, j=0;i<n && j<n ;){
		if (radiant[i]<dire[j]) {
			count++;
			j++;
			i++;
		}
		else {
			j++;
		}
	}
	cout<<count;
} 
//http://www.spoj.com/PTIT/problems/P153PROF/
