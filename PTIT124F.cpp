#include <bits/stdc++.h>
using namespace std;

bool isPrime[101];
bool dd[21];
int way[21];
int n, d=0, k=0;
vector <int> v[21];
int arr[11]={0, 0, 2, 2, 4, 96, 1024, 2880, 81024, 770144};

void init(){
	isPrime[0]=1;
	isPrime[1]=1;
	for (int i=2; i<=10; i++){
		if (isPrime[i]==0){
			for (int j=i*i; j<=100; j+=i){
				isPrime[j]=1;
			}
		}
	}
	for (int i=1; i<=2*n; i++){
		for (int j=1; j<=2*n; j++){
			if (!isPrime[j+i] && i!=j) v[i].push_back(j);
		}
	}
}

void Try(int i){
	for (int j=0; j<v[way[i-1]].size(); j++){
		if (!dd[v[way[i-1]][j]]){
			way[i]=v[way[i-1]][j];
			dd[v[way[i-1]][j]]=1;
			if (i==2*n ){
				if (!isPrime[way[i]+way[1]]){
					d++;
					for (int k=1; k<=2*n; k++) cout<<way[k]<<" ";
					cout<<"\n";
					if (d>=10000) return; 
				}
			}
			else Try(i+1);
			dd[v[way[i-1]][j]]=0;
		}
	}
}

int main (){
	cin>>n;
	init();
	way[1]=1;
	dd[1]=1;
	cout<<arr[n]<<"\n";
	Try(2);
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT124F/
