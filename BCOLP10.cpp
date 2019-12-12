#include <iostream> 
#include <string>
using namespace std;
int abs(int a,int b){
	if (a>b) return a-b;
	else return b-a;
}

int main() 
{
	int a[1000]={0}, b[1000]={0};
	char s1[1000000],s2[1000000];
	cin>>s1>>s2;
	int i=0, j=0, dem=0;
	while (s1[i]!=0){
		a[s1[i]]++;
		i++;
	}
	while (s2[j]!=0){
		b[s2[j]]++;
		j++;
	}
	for (int i=65; i<=123; i++){
		if (a[i]!=b[i]) dem+=abs(a[i], b[i]);
	}
	cout<<dem;
	return 0; 
}  
//http://www.spoj.com/PTIT/problems/BCOLP10/
