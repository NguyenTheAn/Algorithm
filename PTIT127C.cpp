#include<iostream>
#include <algorithm>
using namespace std;
struct Time{
	int s;
	int f;
};
bool cmp(Time a, Time b){
	return a.f < b.f;
}

main()
{
	int n;
	cin>>n;
	Time time[100000];
	for (int i=0; i<n; i++){
		cin>>time[i].s>>time[i].f;
	}
	sort(time, time+n,cmp);
//	for (int i=0; i<n; i++){
//		cout<<time[i].s<<" "<<time[i].f<<endl;
//	}
	int tmp, count = 1;
	tmp = time[0].f;
	for (int i=1; i<n; i++){
		if (time[i].s>=tmp){
			count++;
			tmp=time[i].f;
		}
	}
	cout<<count;
}
//https://www.spoj.com/PTIT/problems/PTIT127C/
