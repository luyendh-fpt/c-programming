#include <stdio.h>
#include <stdlib.h>

int arrNumber[] = {8, 2, 3, 1, 5, 7, 9, 0};

void hienThiMang() {
    printf("Hiển thị các phần tử trong mảng\n");
    for (int i = 0; i < 8; ++i) {
        printf("%d ", arrNumber[i]);
    }
    printf("\n");
}

int main() {
    hienThiMang();
    int tmp;
    for (int i = 0; i < 7; ++i) {
        printf("Tại i = %d, giá trị của arrNumber tại index %d là arrNumber[%d] = %d\n", i, i, i, arrNumber[i]);
        for (int j = i + 1; j < 8; ++j) {
            printf("So sánh %d với %d\n", arrNumber[i], arrNumber[j]);
            if (arrNumber[i] > arrNumber[j]) {
                printf("Vì %d > %d nên thực hiện trao đổi giá trị.\n", arrNumber[i], arrNumber[j]);
                tmp = arrNumber[i];
                arrNumber[i] = arrNumber[j];
                arrNumber[j] = tmp;
            }else{
                printf("Không thực hiện hoán đổi vị trí.\n");
            }
            hienThiMang();
        }
    }
    return 0;
}
