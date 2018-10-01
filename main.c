#include <stdio.h>
#include <stdlib.h>

int congHaiSo(int soThuNhat, int soThuHai) {
    return soThuNhat + soThuHai;
}

int truHaiSo(int soThuNhat, int soThuHai) {
    return soThuNhat - soThuHai;
}

int nhanHaiSo(int soThuNhat, int soThuHai) {
    return soThuNhat * soThuHai;
}

float chiaHaiSo(int soThuNhat, int soThuHai) {
    if (soThuHai == 0) {
        printf("Khong the chia cho 0");
        exit(1);
    }
    return (float) soThuNhat / soThuHai;
}

void taoMenu() {
    printf("-------May tinh cua toi------:\n");
    printf("1. Phep cong.\n");
    printf("2. Phep tru.\n");
    printf("3. Phep nhan.\n");
    printf("4. Phep chia.\n");
    printf("5. Thoat chuong trinh.\n");
    printf("Vui long nhap lua chon cua ban (1|2|3|4|5):\n");
}

int main() {
    int soThuNhat, soThuHai, luaChon;
    while (1 == 1) {
        taoMenu();
        scanf("%d", &luaChon);
        printf("Vui long nhap so thu nhat: ");
        scanf("%d", &soThuNhat);
        printf("Vui long nhap so thu hai: ");
        scanf("%d", &soThuHai);
        switch (luaChon) {
            case 1:
                printf("Tong hai so %d va %d la: %d", soThuNhat, soThuHai, congHaiSo(soThuNhat, soThuHai));
                break;
            case 2:
                printf("Hieu hai so %d va %d la: %d", soThuNhat, soThuHai, truHaiSo(soThuNhat, soThuHai));
                break;
            case 3:
                printf("Tich hai so %d va %d la: %d", soThuNhat, soThuHai, nhanHaiSo(soThuNhat, soThuHai));
                break;
            case 4:
                printf("Thuong hai so %d va %d la: %.2f", soThuNhat, soThuHai, chiaHaiSo(soThuNhat, soThuHai));
                break;
            case 5:
                printf("Hen gap lai.");
                exit(1);
            default:
                printf("Lua chon sai");
                break;
        }
        printf("\n");
    }
    return 0;
}