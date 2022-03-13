#pragma once
#include <iostream>
#include <cmath>
#include<string >
using namespace std;

class HocSinh
{
private:
	string HoVaTen;
	float Toan, Van;
public:
	void NhapThongTin();
	void XuatThongTin();
	float TinhDiemtb();

};
void HocSinh::NhapThongTin()
{
	cout << "Nhap ten: ";
	cin >> HoVaTen;
	cout << "Nhap diem van:";
	cin >> Van;
	cout << "Nhap diem toan: ";
	cin >> Toan;

}
void HocSinh::XuatThongTin()
{
	cout << "Ten: " <<HoVaTen;
	cout << "Diem: " << Toan << " " << Van;
}
float HocSinh::TinhDiemtb()
{
	return((Toan + Van) / 2);
}
//
class DonThuc
{
private:
	int HeSo;
	int SoMu;
public:
	void Nhap();
	void Xuat();
	DonThuc DaoHam();
	DonThuc Nhan();
};

DonThuc DonThuc::DaoHam()
{
	HeSo *= SoMu;
	SoMu -= 1;
}
int main()
{
	HocSinh hs;
	hs.NhapThongTin();
	hs.XuatThongTin();
	cout << hs.TinhDiemtb();
	cout<<"a";
	return 0;
	
}
