#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    // khai báo biến con trỏ tên là pointe
    // và có thể trỏ đến các biến số nguyên.
    int *pointer;
    pointer = &a; // gán địa chỉ của biến a cho con trỏ.
    printf("Giá trị của a là %d\n", a); // In ra giá trị của a.
    printf("Giá trị của con trỏ là %d\n", *pointer); // In 'giá trị con trỏ'
    printf("Địa chỉ của con trỏ là %d\n", pointer); // In ra địa chỉ con trỏ.
    printf("Địa chỉ của a là %d\n", &a); // In ra địa chỉ biến a.
    return 0;
}
