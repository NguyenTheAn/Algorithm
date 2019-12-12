#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	int mang_hai_chieu[3][3];//khai bao mang hai chieu
	// nhap cac phan tu cua mang hai chieu
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout<<"nhap hang "<<i+1<<" cot "<<j+1<<": ";
			cin>>mang_hai_chieu[i][j];
		}
	}
	//tinh tong cac dong cua mang hai chieu
	int tong=0;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout<<mang_hai_chieu[i][j]<<" ";
		}
	for (int j = 0; j < 3; ++j)
		{
			tong+=mang_hai_chieu[i][j];
		}
	cout<<tong<<" ";
	cout<<endl;
	
	}
	
	return 0;
}

