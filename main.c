#include <stdio.h>
#include <stdlib.h>

float tinhDiemTrungBinh(int diemCacMon[], int tongSoMon);

int main() {
    int tongSoMon;
    printf("Vui lòng nhập tổng số môn:");
    scanf("%d", &tongSoMon);
    int diemCacMon[tongSoMon];

    for (int i = 0; i < tongSoMon; i++) {
        printf("Vui lòng nhập giá trị cho phần tử thứ %d\n", i + 1);
        scanf("%d", &diemCacMon[i]);
    }
    printf("In các phần tử trong mảng\n");
    for (int j = 0; j < tongSoMon; ++j) {
        printf("Giá trị của phần tử thứ %d là %d\n", j + 1, diemCacMon[j]);
    }
    printf("Điểm trung bình là %.2f", tinhDiemTrungBinh(diemCacMon, tongSoMon));
    return 0;
}

float tinhDiemTrungBinh(int diemCacMon[], int tongSoMon){
    int tongDiem = 0;
    for (int i = 0; i < tongSoMon; ++i) {
        tongDiem += diemCacMon[i];
    }
    return (float) tongDiem / tongSoMon;
}