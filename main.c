#include <stdio.h>
#include <stdlib.h>

int doicho2so(int a, int b) {
    printf("Giá trị của x được truyền vào là %d\n", a);
    printf("Giá trị của y được truyền vào là %d\n", b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("\n");
    printf("Giá trị của x sau khi đổi chỗ là %d\n", a);
    printf("Giá trị của y sau khi đổi chỗ là %d\n", b);
}

int main() {
    int *pointerOfa; // khai báo.
    int a = 10;
    int b = 20;
    pointerOfa = &a; // gán địa chỉ của biến a cho con trỏ.

    printf("Địa chỉ của a là %d\n", &a);
    printf("Địa chỉ của con trỏ là %d\n", pointerOfa);
    printf("Giá trị của a là %d\n", a);
    printf("Giá trị của con trỏ là %d\n", *pointerOfa);

    pointerOfa = &b;
    printf("Địa chỉ của con trỏ là %d\n", pointerOfa);
    printf("Giá trị của con trỏ là %d\n", *pointerOfa);
    return 0;
}
