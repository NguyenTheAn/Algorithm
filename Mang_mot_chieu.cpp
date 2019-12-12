#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#define array_size 10
using namespace std;
int main()
{
	int array[array_size];
	for (int i=0; i<array_size;i++){
		cout<<"nhap phan tu thu "<<i+1<<": ";
		cin>>array[i];
		}
	// s?p x?p m?ng
	int index;
	for (int i=0;i<array_size;i++){
		for (int j=i+1;j<array_size;j++){
			if (array[i]>array[j]){
				index=array[i];
				array[i]=array[j];
				array[j]=index;
				}
			}
		}
	for (int i=0; i<array_size;i++){
		cout<<array[i]<<" ";
		Sleep(50);
		}
	return 0;
}
