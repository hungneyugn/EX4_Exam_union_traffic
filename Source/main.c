/*
* File: main.c
* Author: Nguyen Phi Hung
* Date: 12/03/2023
* Description: Choose transportation and display price of ticket
*/
#include<traffic.h>
int main()
{
    phuong_tien_giao_thong phuongtien;
    chuong_trinh_chon_duong(&phuongtien);
    HienThiGia(phuongtien);
    return 0;
}