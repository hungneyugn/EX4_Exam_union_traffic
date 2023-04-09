/*
* File: traffic.c
* Author: Nguyen Phi Hung
* Date: 12/03/2023
* Description: File header for choose transportation
*/

#include<traffic.h>

/*
*Function: DuongHangKhong_choice
*Description: Choice types of airline
*Input:
    phuongtien: Pointer to types of road
*Output:None
*/
void DuongHangKhong_choice(phuong_tien_giao_thong *phuongtien)
{
    int choice;
    printf("-----------------------------------\n");
    printf("< Ban da chon duong hang khong >\n");
    printf("Vui long chon loai phuong tien\n");
    printf("Nhan 1: May bay thuong mai\n");
    printf("Nhan 2: May bay truc thang\n");
    printf("Nhan 0: Quay lai\n");
    again:
    printf("Lua chon cua ban la: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Ban chon: May bay thuong mai\n");
        phuongtien->duong_hang_khong.may_bay_thuong_mai = MAY_BAY_THUONG_MAI;
        break;
    case 2:
        printf("Ban chon: May bay truc thang\n");
        phuongtien->duong_hang_khong.may_bay_truc_thang = MAY_BAY_TRUC_THANG;
        break;
    case 0: 
        break;
    default: 
            printf("WARNING!!! HAY CHON NHUNG LUA CHON CO O TREN\n");
            goto again;
    }
}

/*
*Function: DuongBo_choice
*Description: Choice types of road traffic
*Input:
    phuongtien: Pointer to types of road
*Output:None
*/
void DuongBo_choice(phuong_tien_giao_thong *phuongtien)
{
    int choice;
    printf("-----------------------------------\n");
    printf("< Ban da chon duong bo >\n");
    printf("Vui long chon loai phuong tien\n");
    printf("Nhan 1: Xe dap\n");
    printf("Nhan 2: Xe may\n");
    printf("Nhan 3: Xe khach\n");
    printf("Nhan 0: Quay lai\n");
    again:
    printf("Lua chon cua ban la: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: 
            printf("Ban chon xe dap\n");
            phuongtien->duong_bo.xe_dap = XE_DAP;
            break;
        case 2: 
            printf("Ban chon xe may\n");
            phuongtien->duong_bo.xe_may = XE_MAY;
            break;
        case 3: 
            printf("Ban chon xe khach\n");
            phuongtien->duong_bo.xe_khach = XE_KHACH;
            break;
        case 0:
            break;
       default: 
            printf("WARNING!!! HAY CHON NHUNG LUA CHON CO O TREN\n");
            goto again;
    }
}

/*
*Function: DuongThuy_choice
*Description: Choice types of waterway
*Input:
    phuongtien: Pointer to types of road
*Output:None
*/
void DuongThuy_choice(phuong_tien_giao_thong *phuongtien)
{
    int choice;
    printf("-----------------------------------\n");
    printf("< Ban da chon duong thuy >\n");
    printf("Vui long chon loai phuong tien\n");
    printf("Nhan 1: Tau thuy\n");
    printf("Nhan 2: Cano\n");
    printf("Nhan 0: Quay lai\n");
    again:
    printf("Lua chon cua ban la: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
            printf("Ban chon tau thuy\n");
            phuongtien->duong_thuy.tau_thuy = TAU_THUY;
            break;
        case 2:
            printf("Ban chon cano\n");
            phuongtien->duong_thuy.ca_no = CA_NO;
            break;
        case 0: 
            break;
        default: 
            printf("WARNING!!! HAY CHON NHUNG LUA CHON CO O TREN\n");
            goto again;
    }
}

/*
*Function: chuong_trinh_chon_duong
*Description: Choice types of road
*Input:
    phuongtien: Pointer to types of road
*Output:None
*/
void chuong_trinh_chon_duong(phuong_tien_giao_thong *phuongtien)
{
    printf("-----------------------------------------\n");
    printf("Ban muon di chuyen bang duong nao ?\n");
    printf("Nhan 1: Duong Hang Khong\n");
    printf("Nhan 2: Duong Bo\n");
    printf("Nhan 3: Duong Thuy\n");
    printf("Nhan 0: Thoat chuong trinh\n");
    again:
    printf("Lua chon cua bn la: ");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: DuongHangKhong_choice(phuongtien);
                break;
        case 2: DuongBo_choice(phuongtien);
                break;
        case 3: DuongThuy_choice(phuongtien);
                break;
        case 0: exit(0);
        default: 
            printf("WARNING!!! HAY CHON NHUNG LUA CHON CO O TREN\n");
            goto again;
    }
}

/*
*Function: HienThiGia
*Description: dipslay price of ticket
*Input:
    phuongtien: Pointer to types of road
*Output:None
*/
void HienThiGia(phuong_tien_giao_thong phuongtien)
{
    switch (phuongtien.loai_phuong_tien)
    {
    case MAY_BAY_THUONG_MAI:
            printf("Loai phuong tien: May bay thuong mai\n");
            printf("Gia ve: 10.000 vnd\n");
            break;
    case MAY_BAY_TRUC_THANG:
            printf("Loai phuong tien: May bay truc thang\n");
            printf("Gia ve: 20.000 vnd\n");
            break;
    case XE_DAP:
            printf("Loai phuong tien: Xe dap\n");
            printf("Gia ve: 1.000 vnd\n");
            break;
    case XE_MAY:
            printf("Loai phuong tien: Xe may\n");
            printf("Gia ve: 2.000 vnd\n");
            break;
    case XE_KHACH:
            printf("Loai phuong tien: Xe khach\n");
            printf("Gia ve: 2.000 vnd\n");
            break;
    case TAU_THUY:
            printf("Loai phuong tien: Tau thuy\n");
            printf("Gia ve: 15.000 vnd\n");
            break;
    case CA_NO:
            printf("Loai phuong tien: Cano\n");
            printf("Gia ve: 25.000 vnd\n");
            break;
    default: printf("Khong ton tai loai ve\n");
        break;
    }
}