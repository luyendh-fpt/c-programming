#include <stdio.h>
#include <stdlib.h>

int main() {
    int arrayNumber[5];
    int sizeOfArray = sizeof(arrayNumber) / sizeof(int);
    // Cách 1. Làm việc thông qua index của mảng.
    for (int i = 0; i < sizeOfArray; ++i) {
        printf("Vui lòng nhập giá trị cho phần tử thứ %d", i + 1);
        scanf("%d", &arrayNumber[i]);
    }
    for (int j = 0; j < sizeOfArray; ++j) {
        printf("%d\n", arrayNumber[j]);
    }
    // Cách 2. Làm việc thông qua con trỏ và di chuyển con trỏ. p++, p--.
    int *pointer = arrayNumber;
    for (int i = 0; i < sizeOfArray; ++i) {
        scanf("%d", pointer);
        pointer++;
    }
    pointer--;
    for (int j = 0; j < sizeOfArray; ++j) {
        printf("%d ", *pointer);
        pointer--;
    }

    // Cách 3. Làm việc thông qua con trỏ nhưng không di chuyển mà thông
    // qua toán tử p + i;
    int *pointer2 = &arrayNumber[0];
    for (int i = 0; i < sizeOfArray; ++i) {
        scanf("%d", pointer2 + i);
    }

    for (int j = 0; j < sizeOfArray; ++j) {
        printf("%d\n", *(pointer2 + j));
    }

    // Cách 4. Làm việc với mảng thông qua con trỏ (chính là tên của mảng đó.)
    for (int i = 0; i < sizeOfArray; ++i) {
        scanf("%d", arrayNumber + i);
    }
    for (int j = 0; j < sizeOfArray; ++j) {
        printf("%d\n", *(arrayNumber + j));
    }
    return 0;
}
