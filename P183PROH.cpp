#include <iostream>
#include <algorithm>
#include <string.h>

#define LL long long
using namespace std;

int main(){
	int n1, n2, n3;
	int a1[100000], a2[100000], a3[100000];
	int sum1=0, sum2=0, sum3=0;
	cin>>n1>>n2>>n3;
	for (int i=0; i<n1; i++){
		cin>>a1[i];
		sum1+=a1[i];
	}
	for (int i=0; i<n2; i++){
		cin>>a2[i];
		sum2+=a2[i];
	}
	for (int i=0; i<n3; i++){
		cin>>a3[i];
		sum3+=a3[i];
	}
	int i1=0, i2=0, i3=0;
	while (sum1!=sum2 || sum1!=sum3){
		if (sum1>=sum2 && sum1>=sum3){
			sum1-=a1[i1];
			i1++;
		}
		else
			if (sum2>=sum1 && sum2>=sum3){
				sum2-=a2[i2];
				i2++;
			}
			else {
				sum3-=a3[i3];
				i3++;
			}
				
	}
	cout<<sum1;
	return 0;
}
//http://www.spoj.com/ACMPTIT/problems/P183PROH/

