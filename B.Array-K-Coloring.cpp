#include <bits/stdc++.h>
using namespace std;

struct Element{
	int value;
	int pos;
	int result;
};

Element e[10000];
int dd[10000];

bool cmp1(Element e1, Element e2){
	return e1.value>e2.value;
}

bool cmp2(Element e1, Element e2){
	return e1.pos<e2.pos;
}

int main() {
	ifstream in("DATA.txt");
	int n, k;
	cin>>n>>k;
	for (int i=0; i<n; i++){
		cin>>e[i].value;
		dd[e[i].value]++;
		e[i].pos=i;
	}
	for (int i=1; i<=5000; i++){
		if (dd[i]>k){
			cout<<"NO";
			return 0;
		}
	}
	sort(e, e+n, cmp1);
	int i=0;
	while (i!=-1){
		for (int j=1; j<=k; j++){
			e[i].result=j;
			i++;
			if (i==n){
				i=-1;
				break;
			}
		}
	}
	sort (e, e+n, cmp2);
	cout<<"YES\n";
	for (int i=0; i<n; i++){
		cout<<e[i].result<<" ";
	}
	return 0;
}
//https://codeforces.com/contest/1102/problem/B
