#include <iostream>
using namespace std;
long Ucln(long, long);

int main()
{
	long a,b;
	cin>>a>>b;
	int ucln=Ucln(a,b);
	int m;
	cin>>m;
	for (int i=0; i<m; i++){
		bool check=false;
		long l,r;
		cin>>l>>r;
		if (ucln< l) {
			cout<<"-1\n";
			continue;
		}
		if (ucln>=l && ucln<=r){
			cout<<ucln<<endl;
			check=true;
			continue;
		}
		for (int j=r; j>=l; j--){
			if (ucln%j==0){
				if (j>=l && j<=r){
					cout<<j<<endl;
					check=true;
					break;
				}
			}
		}
		if (check == false) cout<<"-1\n";
	}
}

long Ucln(long a, long b){
	int du;
	while (b!=0){
		du=a%b;
		a=b;
		b=du;
	}
	return a;
}
