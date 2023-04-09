/*
* File: traffic.h
* Author: Nguyen Phi Hung
* Date: 12/03/2023
* Description: File header for choose transportation
*/
#ifndef __TRAFFIC_H
#define __TRAFFIC_H

#include<stdio.h>
#include<String.h>
#include<stdlib.h>
/*Enum save types of transportation */
typedef enum{
    MAY_BAY_THUONG_MAI,
    MAY_BAY_TRUC_THANG,
    XE_DAP,
    XE_MAY,
    XE_KHACH,
    TAU_THUY,
    CA_NO
}phuong_tien;

/*Union save types of plane*/
typedef union{
    phuong_tien may_bay_thuong_mai;
    phuong_tien may_bay_truc_thang;
}hang_khong;

/*Union save types of road traffic*/
typedef union{
    phuong_tien xe_dap;
    phuong_tien xe_may;
    phuong_tien xe_khach;
}bo;

/*Union save types of waterway*/
typedef union{
    phuong_tien tau_thuy;
    phuong_tien ca_no;
}thuy;

/*Union save types of road */
typedef union {
    hang_khong duong_hang_khong;
    bo duong_bo;
    thuy duong_thuy;
    phuong_tien loai_phuong_tien;
}phuong_tien_giao_thong;

/*Function choice types of airline*/
void DuongHangKhong_choice(phuong_tien_giao_thong *phuongtien);

/*Function choice types of road traffic*/
void DuongBo_choice(phuong_tien_giao_thong *phuongtien);

/*Function choice types of waterway*/
void DuongThuy_choice(phuong_tien_giao_thong *phuongtien);

/*Function choice type of road*/
void chuong_trinh_chon_duong(phuong_tien_giao_thong *phuongtien);

/*Function dipslay price of ticket*/
void HienThiGia(phuong_tien_giao_thong phuongtien);

#endif