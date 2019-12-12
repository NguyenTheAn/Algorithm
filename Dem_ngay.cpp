#include <iostream>
using namespace std;
bool NamNhuan(int x){
	if (x%400==0 || ((x%4==0) && (x%100!=0))) return true;
	return false;
}
long long tinh_ngay(int x, int y, int z){
	long long ngay=0;
	int thang[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i=1; i<z; i++){
		if (NamNhuan(i)) ngay+=366;
			else ngay+=365;
	}
		for (int i=1; i<y; i++){
			if (i==2 && NamNhuan(z)==true){
				ngay+=29;
				continue;
			}
			ngay+=thang[i];
		}
		ngay+=x;
		return ngay;
}
int main()
{
	int x1,y1,z1,x2,y2,z2;
	cin>>x1>>y1>>z1>>x2>>y2>>z2;
	cout<<tinh_ngay(x2,y2,z2)-tinh_ngay(x1,y1,z1);
}


