#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 5;
    int *pointer = malloc(5 * sizeof(int));

    for (int i = 0; i < size; ++i) {
        printf("Nhap phan tu thu %d", i+1);
        scanf("%d", pointer);
        pointer++;
    }

    pointer--;
    for (int j = 0; j < size; ++j) {
        printf("%d ", *pointer);
        pointer--;
    }
    return 0;
}
