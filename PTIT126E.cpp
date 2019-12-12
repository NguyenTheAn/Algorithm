#include <iostream>
using namespace std;
main()
{
	string str;
	while(1){
		cin>>str;
		if (str == "#") break;
		int demA=0;
		int demY=0;
		int demN=0;
		int demP=0;
		int n=str.length();
		for (int i=0; i<n; i++){
			if (str[i] == 'A') demA++;
			if (str[i] == 'Y') demY++;
			if (str[i] == 'N') demN++;
			if (str[i] == 'P') demP++;
		}
		if ((float)demA>=(float)n/2.0) cout<<"need qourum"<<endl;
		else{
			if (demY > demN) cout<<"yes"<<endl;
			else
			if (demN > demY) cout<<"no"<<endl;
			else
			cout<<"tie"<<endl;
		}
	}
}
//http://www.spoj.com/PTIT/problems/PTIT126E/
