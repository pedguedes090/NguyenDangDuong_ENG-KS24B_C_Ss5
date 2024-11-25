#include <stdio.h>

int main() {
    int i = 10;
    int number;
    printf("Nhap vao mot so : ");
    do {
        scanf("%d", &number);
        if (number != i) {
            printf("So nhap khong dung, vui long nhap lai: ");
        }
    } while (number != i);
    printf("Ban da nhap dung so cho truoc. Ket thuc chuong trinh.\n");
    
    return 0;
}

