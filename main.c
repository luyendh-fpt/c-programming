#include <stdio.h>
#include <stdlib.h>

int doicho2so(int *pointerOfA, int *pointerOfB) {
    printf("Giá trị của x được truyền vào là %d\n", *pointerOfA);
    printf("Giá trị của y được truyền vào là %d\n", *pointerOfB);
    int tmp = *pointerOfA;
    *pointerOfA = *pointerOfB;
    *pointerOfB = tmp;
    printf("\n");
    printf("Giá trị của x sau khi đổi chỗ là %d\n", *pointerOfA);
    printf("Giá trị của y sau khi đổi chỗ là %d\n", *pointerOfB);
}

int main() {
    int a, b;
    printf("Vui lòng nhập a: ");
    scanf("%d", &a);
    printf("Vui lòng nhập b: ");
    scanf("%d", &b);
    if(a > b){
        doicho2so(&a, &b);
    }
    printf("Kết quả cuối cùng:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
}
