#include <iostream>
#include <algorithm>
#define LL long long
using namespace std;
struct Cost{
	LL sum;
	LL sale;
};
bool cmp(Cost a, Cost b){
	return a.sum < b.sum;
}

main (){
	LL n, s;
	cin>>n>>s;
	Cost cost[10000];
	for (LL i=0; i<n; i++){
		LL a, b;
		cin>>a>>b;
		cost[i].sum=a+b;
		cost[i].sale=(a+b) - (a/2 + b);
	}
	LL maxsale = 0;
	LL count = 0;
	sort(cost, cost+n, cmp);
	for (LL i=0; i<n; i++){
		if (s>=cost[i].sum){
			s-=cost[i].sum;
			count++;	
		}
		else {
			maxsale=cost[i].sale;
			for (LL j=i; j>=0; j--){
				if (cost[j].sale>maxsale) maxsale=cost[j].sale;
			}
			s+=maxsale;
			if (s>=cost[i].sum){
				count++;
				s-=cost[i].sum
			}
			else break;
		}
	}
	cout<<count;
}
//http://www.spoj.com/PTIT/problems/PTIT125B/
