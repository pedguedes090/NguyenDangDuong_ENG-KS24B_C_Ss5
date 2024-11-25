#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;
    int lua_chon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 1:
                printf("Nhap so thu nhat: ");
                scanf("%d", &a);
                printf("Nhap so thu hai: ");
                scanf("%d", &b);
                printf("Nhap so thu ba: ");
                scanf("%d", &c);
                break;
            case 2:
                printf("Tong 3 so: %d\n", a + b + c);
                break;
            case 3:
                printf("Trung binh cong 3 so: %.2f\n", (a + b + c) / 3.0);
                break;
            case 4:
                if (a <= b && a <= c){
                	printf("So nho nhat: %d\n", a);
                }else if (b <= a && b <= c){ 
					printf("So nho nhat: %d\n", b);
					}else printf("So nho nhat: %d\n", c);
                break;
                
            case 5:
                if (a >= b && a >= c){
                	printf("So lon nhat: %d\n", a);
                }else if (b >= a && b >= c){
					printf("So lon nhat: %d\n", b);
					}else printf("So lon nhat: %d\n", c);
                break;                                
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long chon lai!\n");
        }
    } while (lua_chon != 6);

    return 0;
}
