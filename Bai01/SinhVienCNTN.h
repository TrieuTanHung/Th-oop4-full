#include "SinhVien.h"

class SinhVienCNTN :public SinhVien
{
public:
	SinhVienCNTN() {};
	~SinhVienCNTN() {};
	virtual int tinhTien()
	{
		if ((soMonMoiDangKy + soMonDangKyHocLai) < 5)
			return -1;
		int soTien = 500000 + soMonMoiDangKy * 200000 + soMonDangKyThiLai * 50000 + soMonDangKyHocLai * 100000;
		return soTien;
	}
};