#include <bits/stdc++.h>

using namespace std;

string s;
long long d=0, n;
int bin[100];
char vowel[] = "AIEOU";


bool nguyenam(char a){
	long long n = strlen(vowel);
	for (long long i=0; i<n; i++){
		if (a == vowel[i]) return 1;
	}
	return 0;
}

//ostream &operator << (ostream &out, long long bin[]){
//	for (long long i=0; i<n; i++){
//		cout<<bin[i]<<" ";
//	}
//	cout<<endl;
//} 

void init(){
	for (long long i=0; i<n; i++){
		if (s[i]=='_') {
			bin[i]=-2;
			continue;
		};
		if (s[i]=='L'){
			bin[i]=-1;
			continue;
		}
		if (nguyenam(s[i])) bin[i]=1;
		else bin[i]=0;
	}
}

bool check(){
	bool b=0;
	for (long long i=0; i<n-2; i++){
		if (bin[i]==-1) b=1;
		if (bin[i]!= 1 && bin[i]!=0 && bin[i]!=-1) return 0;
		if (bin[i]==1 && bin[i+1]==1 && bin[i+2]==1) return 0;
		if ((bin[i]==0 || bin[i]==-1) && (bin[i+1]==0 || bin[i+1]==-1) && (bin[i+2]==0 || bin[i+2]==-1)) return 0;
	}
	for (long long i=n-2; i<n; i++){
		if (bin[i]!= 1 && bin[i]!=0 && bin[i]!=-1) return 0;
		if (bin[i]==-1) b=1;
	}
	if (b==1) return 1;
	return 0;
}

long long count(){
	long long d=1;
	for (long long i=0; i<n; i++){
		if (s[i]=='_'){
			if (bin[i]==0) d*=20;
			if (bin[i]==1) d*=5;
		}
	}
	return d;
}


void Try(long long i){
	for (long long j=-1; j<=1; j++){
		if (bin[i]==-2) {
			bin[i]=j;
			if (i==n-1){
				if (check()){
//					cout<<bin;
					d+=count();
				}
			}
			else Try(i+1);
			bin[i]=-2;
		}
		else break;
	}
	if (i==n-1){
		if (check()){
//			cout<<bin;
			d+=count();
		}
	}
	else Try(i+1);
}


int main(){
	cin>>s;
	n=s.length();
	init();
	Try(0);
	cout<<d;
	return 0;
}
//https://www.spoj.com/PTIT/problems/P135SUMG/
