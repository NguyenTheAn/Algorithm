#include <iostream>
#include <algorithm>
using namespace std;
struct Sinhvien{
	string name;
};
bool cmp(Sinhvien a, Sinhvien b){
	return a.name < b.name;	
}

int main(){
	int n, k;
	cin>>n>>k;
	Sinhvien *ptr;
	ptr = new Sinhvien[n+1];
	for (int i=1; i<=n; i++){
		cin>>ptr[i].name;
	}
	sort(ptr+1, ptr+n+1, cmp);
	int i;
	for (i=1; ;i++){
		if (i>=k){
			break;
		}
		else k-=i;
	}
	cout<<ptr[k].name;
	delete [] ptr;
}
//http://vn.spoj.com/PTIT/problems/P174PROF/
