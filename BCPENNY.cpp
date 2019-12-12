#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char c[8][4]={"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
	int dem[8], t, n;
	char s[41], ss[4];
	cin>>t;
	for (int k=0; k<t; k++){
		cin>>n;
		cin>>s;
		memset(dem, 0, sizeof dem);
		ss[3]='\0';
		for (int i=0; i<38; i++){
			ss[0]=s[i];
			ss[1]=s[i+1];
			ss[2]=s[i+2];
			for (int j=0; j<8; j++){
				if (strcmp(ss,c[j])==0) dem[j]++;
			}
		}
		cout<<n<<" ";
		for (int j=0; j<8; j++){
			cout<<dem[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//http://www.spoj.com/PTIT/problems/BCPENNY/
