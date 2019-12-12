#include <iostream>
using namespace std;
void swap (int &, int &);

main()
{
	int s,n,m=0;
	cin>>s>>n;
	int dragon [n][2];
	for (int i=0;i<n;i++){
		cin>>dragon[i][0]>>dragon[i][1];
	}
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (dragon[i][0]>dragon[j][0]) {
				swap(dragon[i][0], dragon[j][0]);
				swap(dragon[i][1], dragon[j][1]);
			}
			}
		}
	for (int i=0;i<n;i++){
		if (s>dragon[i][0]){
			s+= dragon[i][1];
			m++;
		} 
		 else 
		 	break;
	}
	if (m==n) cout<<"YES";
		else cout<<"NO";
}

void swap (int &a, int &b){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
//http://www.spoj.com/PTIT/problems/P143SUMA/
