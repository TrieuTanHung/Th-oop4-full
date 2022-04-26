#pragma once
#include "SinhVien.h"
#include "SinhVienCNTN.h"
#include "SinhVienCTTT.h"

class QuanLy
{
private:
	vector <SinhVien*> danhSachSinhVien;
public:
	QuanLy();
	~QuanLy();
	void Nhap();
	void Xuat();
	int tinhTien();
};

