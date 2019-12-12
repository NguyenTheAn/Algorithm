
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()	
{
	string str;
	cout<<"nhap chuoi: ";
	getline(cin,str,'.');
	for (int i=0;i<str.length();i++){
		cout<<str[i];
		Sleep(50);
		}
	return 0;
}
