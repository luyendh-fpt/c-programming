#include <stdio.h>


int main() {
    int num; // khai báo một "biến" kiểu số nguyên
    printf("Please enter a number:"); // In ra màn hình đoạn text yêu cầu nhập số.
    // Yêu cầu người dùng nhập từ bàn phím và lấy giá trị đó đưa vào
    // biến num.
    scanf("%d", &num);
    // Kiểm tra nếu như num chia lấy dư cho 2 mà bằng 0
    // thì in ra text "Number is even".
    if (num % 2 == 0) {
        printf("Number is even.");
    }
    // kết thúc chương trình.
    return 0;
}