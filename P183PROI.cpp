#include <iostream>
#include <algorithm>
#include <string.h>

#define LL long long
using namespace std;

bool Bsearch(int x, int a[], int left, int right){
	int mid=(left+right)/2;
	if (a[mid]==x) return 1;
	while (left<right){
		if(a[mid]>x){
			return Bsearch(x, a, left, mid-1);
		}
		else return Bsearch(x, a, mid+1, right);
	}
	return 0;
}

void lowercase(char s[]){
	int n=strlen(s);
	for (int i=0; i<n; i++){
		if (s[i]>='A' && s[i]<='Z') s[i]+=32;
	}
}

int main (){
	char s[100005];
	int n;
	cin>>s;
	lowercase(s);
	cin>>n;
	int len = strlen(s), d=1, dd[100005], j=0;
	for (int i=0; i<len; i++){
		if (s[i+1]==s[i]){
			dd[j]=d*(s[i]-96);
			j++;
			d++;
		}
		else {
			dd[j]=d*(s[i]-96);
			d=1;
			j++;
		}
	}
	sort(dd, dd+j);
//	for (int i=0; i<j; i++){
//		cout<<dd[i]<<" ";
//	}
	for (int i=0; i<n; i++){
		int x;
		cin>>x;
		if (Bsearch(x, dd, 0, j-1)){
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
	}
	return 0;
}
//http://www.spoj.com/ACMPTIT/problems/P183PROI/
