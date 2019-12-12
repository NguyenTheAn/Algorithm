#include <bits/stdc++.h>
using namespace std;

int t, n, a[21], X[21];
vector <long long> v;

void Try(int i){
	for (int j=0; j<=1; j++){
		X[i] = j;
		if (i == n-1){
			long long tmp = 0;
			for (int j=0; j<n; j++){
				if (X[j]) tmp += a[j];
			}
			v.push_back(tmp);
		}
		else Try(i+1);
	}
}

int main(){
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--){
    	v.clear();
    	cin>>n;
    	for (int i=0; i<n; i++){
    		cin>>a[i];
		}
		Try(0);
		sort(v.begin(), v.end());
		bool flag = 0;
		for (int i=0; i<v.size()-1; i++){
			if (v[i] == v[i+1]) {
				flag = 1;
				break;
			}
		}
		if (flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

//https://www.spoj.com/PTIT/problems/PTIT018E/
