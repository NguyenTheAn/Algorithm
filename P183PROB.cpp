#include <iostream>
#include <algorithm>
#include <string.h>

#define LL long long
using namespace std;

struct Data{
	LL goods;
	LL customers;
	LL seleted;
	LL nonseleted;
	LL extra;
};
bool cmp(Data a, Data b){
	return a.extra > b.extra;
}
Data day[100000];

int main (){
	LL n, f;
	cin>>n>>f;
	for (LL i=0; i<n; i++){
		cin>>day[i].goods>>day[i].customers;
		day[i].seleted = day[i].goods*2 < day[i].customers ? day[i].goods*2 : day[i].customers;
		day[i].nonseleted = day[i].goods < day[i].customers ? day[i].goods : day[i].customers;
		day[i].extra = day[i].seleted - day[i].nonseleted;
	}
	sort(day, day+n, cmp);
	LL kq=0;
	for (LL i=0; i<n; i++){
		if (i<f) kq+=day[i].seleted;
		else kq+= day[i].nonseleted;
	}
	cout<<kq;	
	return 0;
}
//http://www.spoj.com/PTIT/problems/P183PROB/
