#include <stdio.h>

	int main(){
	int number;
	do {
		printf("Nhap vao so nguyen tu 1-10: ");
		scanf("%d", &number);
	} while (number < 1 || number > 10);
	printf("\nBang cuu chuong %d:\n", number);
	for (int i = 1; i<= 10; i++) {
	printf("%d x %d = %d\n", number, i, number * i); }
return 0;
}
