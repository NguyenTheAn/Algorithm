#include <bits/stdc++.h>
using namespace std;

int main(){
//	freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while (t--){
	    int n, a[1001];
	    cin>>n;
	    int Max = INT_MIN;
	    for (int i=1; i<=n; i++){
			cin>>a[i];
	    	Max = max(Max, a[i]);
		} 
		cout<<Max<<" ";
		for (int i=2; i<=n; i++){
			Max = INT_MIN;
			for (int j=1; j<=n-i+1; j++){
				a[j] = min(a[j], a[j+1]);
				Max = max(a[j], Max);
			}
			cout<<Max<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT018H/
