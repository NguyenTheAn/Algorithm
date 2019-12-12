#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int t;
	int cost[]={500, 200, 100, 50, 20, 10, 5, 2, 1};
	cin>>t;
	for (int i=0; i<t; i++){
		int x, count=0;
		cin>>x;
		for (int i=0; i<9; i++){
			int n = x / cost[i];
			if (n != 0){
				x -= n * cost[i];
				count += n;
			}
		}
		cout<<count<<endl;
	}
}
//http://vn.spoj.com/PTIT/problems/BCATM3/
