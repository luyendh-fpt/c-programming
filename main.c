#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

struct SinhVien {
    char ten[50];
    char email[50];
    char soDienThoai[20];
    int tuoi;
};

void removeStdChar(char array[]) {
    if (strchr(array, '\n') == NULL) {
        while (fgetc(stdin) != '\n');
    }
}

int main() {
    struct SinhVien sinhViens[2];
    for (int i = 0; i < 2; ++i) {
        printf("Vui lòng nhập tên sinh viên thứ %d", i + 1);
        fgets(sinhViens[i].ten, sizeof(sinhViens[i].ten) * sizeof(char), stdin);
        removeStdChar(sinhViens[i].ten);
        printf("Vui lòng nhập email sinh viên thứ %d", i + 1);
        fgets(sinhViens[i].email, sizeof(sinhViens[i].email) * sizeof(char), stdin);
        removeStdChar(sinhViens[i].email);
        printf("Vui lòng nhập phone sinh viên thứ %d", i + 1);
        fgets(sinhViens[i].soDienThoai, sizeof(sinhViens[i].soDienThoai) * sizeof(char), stdin);
        removeStdChar(sinhViens[i].soDienThoai);
        printf("Vui lòng nhập tuổi sinh viên thứ %d", i + 1);
        scanf("%d", &sinhViens[i].tuoi);
        getchar();
    }

    for (int i = 0; i < 2; ++i) {
        printf("Tên sinh viên %s\n", sinhViens[i].ten);
        printf("Số điện thoại %s\n", sinhViens[i].soDienThoai);
        printf("Email %s\n", sinhViens[i].email);
        printf("Tuổi %d\n", sinhViens[i].tuoi);
    }

    return 0;
}
