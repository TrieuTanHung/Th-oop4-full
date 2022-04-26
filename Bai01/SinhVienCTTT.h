#include "SinhVien.h"

class SinhVienCTTT :public SinhVien
{
public:
	SinhVienCTTT() {};
	~SinhVienCTTT() {};
    virtual int tinhTien()
    {
        if ((soMonMoiDangKy + soMonDangKyHocLai) < 3)
            return -1;
        int sotien = 10000000 +
            soMonMoiDangKy * 1000000 +
            soMonDangKyThiLai * 100000 +
            soMonDangKyHocLai * 500000;
        return sotien;
    }
};