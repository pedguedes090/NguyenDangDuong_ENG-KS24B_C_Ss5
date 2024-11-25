#include <stdio.h>

int main() {
    int number;
    printf("Nhap vao mot so nguyen bat ky: ");
    scanf("%d", &number);
    printf("Cac chu so trong so da nhap: ");   
    if(number == 0) {
        printf("0\n");
    } else {
        while (number != 0) {
            printf("%d ", number % 10);
            number = number / 10;
        }
        printf("\n");
    }
    return 0;
}

