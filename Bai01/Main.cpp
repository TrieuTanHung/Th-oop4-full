#include "SinhVien.h"
#include "QuanLy.h"

int main()
{
	QuanLy quanly;
	quanly.Nhap();
	cout << "====================";
	quanly.Xuat();
	cout << endl;
	cout << "Tong Tien: " << quanly.tinhTien();
	return 0;
}