#include <iostream>
#include <string.h>
using namespace std;
void lowercase(char a[]){
	for (int i=0; i<strlen(a); i++){
		if (a[i]>='A' && a[i]<='Z'){
			a[i]+=32;
		}
	}
}

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	for (int k=0; k<t; k++){
		char xau[100007];
		gets(xau);
		lowercase(xau); 
		int check[1000], n=strlen(xau), gt;
		gt=0;
		memset(check, 0, sizeof check);
		for (int i=0; i<n; i++){
			if (xau[i]!=' ') check[xau[i]]++;
		}
		for (int i='a'; i<='z'; i++){
			if (check[i]>1){
				gt+=check[i];
			}
		}
		cout<<gt<<" ";
		memset(check, 0, sizeof check);
		for (int i=0; i<n; i++){
			if (check[xau[i]]==0 && xau[i]!=' '){
				cout<<xau[i];
				check[xau[i]]=1;
			}
		}	
		cout<<endl;
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/P153PROI/
