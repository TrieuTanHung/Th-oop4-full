#include "QuanLy.h"

QuanLy::QuanLy()
{

}

QuanLy::~QuanLy()
{
    // delete danh sach sinh vien
    for (int i = 0; i < danhSachSinhVien.size(); i++)
    {
        delete danhSachSinhVien[i];
    }
}

void QuanLy::Nhap()
{
    cout << "So luong hoc sinh: ";
    int n;
    cin >> n;
    danhSachSinhVien.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "1.SVCNTN" << endl;
        cout << "2.SVCTTT" << endl;
        int chon;
        cout << "Nhap doi tuong sinh vien: ";
        cin >> chon;
        if (chon == 1)
            danhSachSinhVien[i] = new SinhVienCNTN();
        else if (chon == 2)
            danhSachSinhVien[i] = new SinhVienCTTT();
        else
            throw "Khong co";

        danhSachSinhVien[i]->Nhap();
    }
}
void QuanLy::Xuat()
{

    for (int i = 0; i < danhSachSinhVien.size(); i++)
    {
        danhSachSinhVien[i]->Xuat();
    }
}

int QuanLy::tinhTien()
{
    int tongTien = 0;
    for (int i = 0; i < danhSachSinhVien.size(); i++)
    {
        int tmp = danhSachSinhVien[i]->tinhTien();
        if (tmp < 0)
            continue;
        /*if(tmp>0)
        {
            tongTien += tmp;
        }*/
        tongTien += tmp;
    }
    return tongTien;
}