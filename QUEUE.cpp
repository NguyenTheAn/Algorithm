#include <iostream>
using namespace std;


main()
{
    int a[100000]={0}, n=-1, k;
	int t;
	cin>>t;
	for (int i=0; i<t;i++){
		cin>>k;
		switch (k){
			case 1:{
				cout<<n+1<<endl;
				break;
			}
			case 2:{
				if (n==-1) cout<<"YES\n";
				else cout<<"NO\n";
				break;
			}
			case 3:{
				int x;
				cin>>x;
				n++;
				for (int i=n; i>=0; i--){
					a[i]=a[i-1];
				}
				a[0]=x;
				break;
			}
			case 4:{
				if (n!=-1){
					n--;
				}
				break;
			}
			case 5:{
				if (n!=-1)
					cout<<a[n]<<endl;
				else cout<<"-1\n";
				break;
			}
			case 6:{
				if (n!=-1)
					cout<<a[0]<<endl;
				else cout<<"-1\n";
				break;
			}
		}
	}
}

