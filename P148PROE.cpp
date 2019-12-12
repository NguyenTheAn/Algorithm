#include <iostream>
#include <string.h>
using namespace std;

main()
{
	char s1[101], s2[101], s[201], s12[201];
	int n;
	while (1){
		cin>>n;
		bool check=0;
		int d=0;
		if (n==0) break;
		cin>>s1>>s2>>s;
		for (int i=1; i<=50; i++){
			d++;
			for (int i=0, j=0; j<n; i+=2, j++){
				s12[i]=s2[j];
				s12[i+1]=s1[j];
				s12[i+2]='\0';
			}
			if (strcmp(s12, s)==0){
				cout<<d<<endl;
				check=1;
				break;
			}
			for (int i=0; i<n; i++){
				s1[i]=s12[i];
				s1[i+1]='\0';
			}
			for (int i=n; i<2*n; i++){
				s2[i-n]=s12[i];
				s2[i-n+1]='\0';
			}
		}
		if (!check) cout<<"-1\n";
	}
}
//http://www.spoj.com/PTIT/problems/P148PROE/
