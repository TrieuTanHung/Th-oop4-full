#include "SinhVien.h"

SinhVien::SinhVien()
{

}
SinhVien::~SinhVien()
{

}
string SinhVien::get_hoTen()
{
	return hoTen;
}
void SinhVien::set_hoTen(string hoTen)
{
	this->hoTen = hoTen;
}
int SinhVien::get_Tuoi()
{
	return tuoi;
}
void SinhVien::set_Tuoi(int tuoi)
{
	this->tuoi = tuoi;
}
string SinhVien::get_MSSV()
{
	return MSSV;
}
void SinhVien::set_MSSV(string MSSV)
{
	this->MSSV = MSSV;
}
int SinhVien::get_soMonMoiDangKy()
{
	return soMonMoiDangKy;
}
void SinhVien::set_soMonMoiDangKy(int soMonMoiDangKy)
{
	this->soMonMoiDangKy = soMonMoiDangKy;
}
int SinhVien::get_soMonDangKyThiLai()
{
	return soMonDangKyThiLai;
}
void SinhVien::set_soMonDangKyThiLai(int soMonDangKyThiLai)
{
	this->soMonDangKyThiLai = soMonDangKyThiLai;
}
int SinhVien::get_soMonDangKyHocLai()
{
	return soMonDangKyHocLai;
}
void SinhVien::set_soMonDangKyHocLai(int soMonDangKyHocLai)
{
	this->soMonDangKyHocLai = soMonDangKyHocLai;
}
int SinhVien::tinhTien()
{
	return 0;
}
void SinhVien::Nhap()
{
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, hoTen);
	//cin >> hoTen;
	cout << "Nhap tuoi: ";
	cin >> tuoi;
	cout << "Nhap MSSV: ";
	cin >> MSSV;
	cout << "Nhap so mon moi dang ky: ";
	cin >> soMonMoiDangKy;
	cout << "Nhap so mon dang ky thi lai: ";
	cin >> soMonDangKyThiLai;
	cout << "Nhap so mon dang ky hoc lai: ";
	cin >> soMonDangKyHocLai;
}
void SinhVien::Xuat()
{
	cout << "\nHo ten: " << hoTen;
	cout << "\nTuoi: " << tuoi;
	cout << "\nMSSV: " << MSSV;
	cout << "\nSo mon moi dang ky: " << soMonMoiDangKy;
	cout << "\nSo mon dang ky thi lai: " << soMonDangKyThiLai;
	cout << "\nSo mon dang ky hoc lai: " << soMonDangKyHocLai;
}