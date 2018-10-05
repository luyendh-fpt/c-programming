#include <stdio.h>
#include <stdlib.h>

int main() {
    int sizeOfArray;
    printf("Vui lòng nhập số lượng phần tử");
    scanf("%d", &sizeOfArray);

    int *pointer = (int *) malloc(sizeOfArray * sizeof(int));
    if (pointer == NULL) {
        printf("Không đủ bộ nhớ");
        return 0;
    }
    for (int i = 0; i < sizeOfArray; ++i) {
        printf("Nhập gía trị cho phần tử thứ %d", i + 1);
        scanf("%d", pointer + i);
    }
    for (int j = 0; j < sizeOfArray; ++j) {
        printf("Gía trị tại phần tử thứ %d là %d\n", j + 1, *(pointer + j));
    }
    return 0;
}
