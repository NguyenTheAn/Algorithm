#include <iostream>
using namespace std;
int cho_can(long ,long ,long);

main()
{
	long a,b,c,d,p,m,g;
	cin>>a>>b>>c>>d;
	cin>>p>>m>>g;
	switch (cho_can(a,b,p)+cho_can(c,d,p)){
		case 0:{
			cout<<"none"<<endl;
			break;
		}
		case 1:{
			cout<<"one"<<endl;
			break;
		}
		case 2:{
			cout<<"both"<<endl;
			break;
		}
	}
	switch (cho_can(a,b,m)+cho_can(c,d,m)){
		case 0:{
			cout<<"none"<<endl;
			break;
		}
		case 1:{
			cout<<"one"<<endl;
			break;
		}
		case 2:{
			cout<<"both"<<endl;
			break;
		}
	}
	switch (cho_can(a,b,g)+cho_can(c,d,g)){
		case 0:{
			cout<<"none"<<endl;
			break;
		}
		case 1:{
			cout<<"one"<<endl;
			break;
		}
		case 2:{
			cout<<"both"<<endl;
			break;
		}
	}
}

int cho_can(long x ,long y ,long z){
	int tmp=z%(x+y);
	if (tmp==0) return 0;
	else if (tmp>x) return 0;
			else return 1;
}
//http://www.spoj.com/PTIT/problems/P132SUMH/
