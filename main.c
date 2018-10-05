#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 10;
//    int j = ++i;
    int j = i++;
    printf("%d", j);
    return 0;
}
