#include <stdio.h>
#include <stdlib.h>

int main() {
    // Yêu cầu người dùng nhập số lượng phần tử đầu tiên.
    int sizeOfArray;
    printf("Vui lòng nhập số lượng phần tử: ");
    scanf("%d", &sizeOfArray);
    // Cấp phát bộ nhớ cho con trỏ theo số lượng phần tử người dùng nhập vào.
    int *pointer = (int *) malloc(sizeOfArray * sizeof(int));
    // kiểm tra lại xem con trỏ có thật sự được cấp phát bộ nhớ ko.
    if (pointer == NULL) {
        printf("Không đủ bộ nhớ");
        return 0;
    }
    // Yêu cầu người dùng nhập giá trị cho các phần tử trong mảng.
    int i;
    for (i = 0; i < sizeOfArray; ++i) {
        printf("Nhập gía trị cho phần tử thứ %d: ", i + 1);
        scanf("%d", pointer + i);
//        pointer++;
    }
    // Yêu cầu người dùng nhập số lượng phần tử muốn cấp phát thêm.
    printf("Nhập số lượng bạn muốn thêm: ");
    int additionSize;
    scanf("%d", &additionSize);
    // Cấp phát thêm bộ nhờ cho con trỏ theo số lượng người dùng nhập vào.
    pointer = (int *) realloc(pointer, additionSize * sizeof(int));
    // kiểm tra lại xem con trỏ có thật sự được cấp phát bộ nhớ ko.
    if (pointer == NULL) {
        printf("Không đủ bộ nhớ.");
        return 0;
    }
    // Cập nhật số lượng phần tử trong mảng.
    sizeOfArray += additionSize;
    // Yêu cầu người dùng nhập các phần tử thêm.
    for (i; i < sizeOfArray; ++i) {
        printf("Nhập gía trị cho phần tử thứ %d: ", i + 1);
        scanf("%d", pointer + i);
//        pointer++;
    }
    // In ra các phần tử vừa nhập.
//    // Di chuyển con trỏ lùi lại một ô nhớ.
//    pointer--;
    for (int j = 0; j < sizeOfArray; ++j) {
        printf("Gía trị tại phần tử thứ %d là %d.\n", j + 1, *(pointer + j));
//        pointer--;
    }
    // Giải phóng bộ nhớ.
    free(pointer);
    return 0;
}
