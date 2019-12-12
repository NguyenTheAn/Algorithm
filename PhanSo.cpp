#include <iostream>
#include <string>
#include <algorithm>
#inlcude <iomanip>
struct sinhvien{
	string ten;
	float toan;
	float ly;
	float tb;
	string xeploai;
}; typedef sinhvien SinhVien;
void nhap(SinhVien sv[], int n){
	for (int i=0; i<n; i++){
		cout<<"Nhap thong tin sinh vien thu "<<i+1<<"\n";
		cout<<"Ho va ten: ";
		getline(cin, sv[i].ten);
		cout<<"Diem Toan: ";
		cin>>sv[i].toan;
		cout<<"Diem Ly: ";
		cin>>sv[i].ly;
		fflush(stdin);
		}
}
void khoitao(SinhVien sv[], int n){
	for (int i=0; i<n; i++){
		sv[i].tb=(sv[i].toan + sv[i].ly)/2;
		sv[i].xeploai=(sv[i].tb>8) ? "Gioi" : ((sv[i].tb>=7) ? "Kha" : ((sv[i].tb>=5) ? "Trung Binh" : "Kem"));
	}
}
void xuat(SinhVien sv[], int n){
	cout<<"\nSTT"<<setw(15)<<"Ho Va Ten"<<setw(20)<<"Diem Toan"<<setw(10)<<"Diem Ly"<<setw(10)<<"Diem TB"<<setw(10)<<"Xep Loai"<<endl;
	for (int i=0; i<n; i++){
		cout<<i+1<<setw(20)<<sv[i].ten<<setw(15)<<sv[i].toan<<setw(10)<<sv[i].ly<<setw(10)<<sv[i].tb<<setw(10)<<sv[i].xeploai<<endl;
	}
}
void sapxep(SinhVien sv[], int n){
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (sv[i].tb<sv[j].tb){
				swap(sv[i], sv[j]);
			}
		}
	}
}
main()
{
	int n;
	cout<<"Nhap so sinh vien: ";
	cin>>n;
	fflush(stdin);
	SinhVien *sv;
	sv=new SinhVien[n];
	nhap(sv, n);
	khoitao(sv, n);
	sapxep(sv, n);
	xuat(sv, n);
	delete [] sv;
}  

