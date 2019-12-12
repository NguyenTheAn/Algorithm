#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string s;
	long n;
	int dem=0;
	cin>>s;
	bool check=true;
	n=s.length()-1;
	for (long i=n; i>=0; i--){
		if (s[i]=='4'){
			dem++;
		}
		if (s[i]=='1'){
			dem=0;
		}
		if (dem>2){
			check=0;
			break;
		}
		if (s[i]!='4' && s[i]!='1'){
			check=0;
			break;
		}
	}
	if (check==1 && s[0]=='1') cout<<"YES";
	else cout<<"NO";
}
