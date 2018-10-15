#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main() {
    // 1. Yêu cầu nhập tên.
    // 2. In ra độ dài của tên.
    // 3. Yêu cầu nhập họ.
    // 4. In ra độ dài của họ.
    // 5. Nối tên vào họ. In ra kết qủa sau khi nối.

    // Khai báo mảng 20 ký tự chứa họ người dùng.
    char ho[20];
    printf("Vui lòng nhập họ: \n");
    // fgets(nhập vào đâu, nhập bao nhiêu, lấy từ đâu);
    fgets(ho, sizeof(ho) * sizeof(char), stdin);
    // fflush(sdtin);
    // Tìm trong họ ký tự xuống dòng strchr(ho, '\n').
//    if (!strchr(ho, '\n')) {
//        do {
//            char charInStdin = fgetc(stdin);
//            printf("'%c'\n", charInStdin);
//            if(charInStdin != '\n'){
//                printf("Không phải \\n\n");
//            }else{
//                printf("Tìm thấy \\n\n");
//                break;
//            }
//        }while(1);
//    }
    if (!strchr(ho, '\n')) {
        while (fgetc(stdin) != '\n');
    }

    // in ra độ dài của họ => strlen
    // Tính ra độ dài của họ vừa nhập.
    int doDaiCuaHo = strlen(ho);
    printf("Độ dài của họ là %d\n", doDaiCuaHo);

    // Remove dấu xuống dòng nằm trong họ.
    ho[strlen(ho) - 1] = ' ';

    char ten[20];
    printf("Vui lòng nhập tên: \n");
    fgets(ten, sizeof(ten) * sizeof(char), stdin);
//    if (!strchr(ho, '\n')) {
//        do {
//            char charInStdin = fgetc(stdin);
//            printf("'%c'\n", charInStdin);
//            if(charInStdin != '\n'){
//                printf("Không phải \\n\n");
//            }else{
//                printf("Tìm thấy \\n\n");
//                break;
//            }
//        }while(1);
//    }
    if (!strchr(ho, '\n')) {
        while (fgetc(stdin) != '\n');
    }
    int doDaiCuaTen = strlen(ten);
    printf("Độ dài của họ là %d\n", doDaiCuaTen);

    // Tạo ra một mảng ký tự mới có size có thể chứa được cả họ và tên.
    char hovaten[doDaiCuaHo + doDaiCuaTen];
    // Copy thông tin từ mảng họ vào mảng mới
    strcpy(hovaten, ho);
    // Nối tên vào mảng mới
    strcat(hovaten, ten);
    // In ra.
    printf("Họ và tên vừa nhập: %s", hovaten);
    return 0;
}
