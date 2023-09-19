#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, age, number;
	char name[50], address[200], email[100], sex[10];
	
	while(a < 3) {
		printf("1. Nhap thong tin sinh vien");
		printf("\n2. Hien thi thong tin sinh vien");
		printf("\n3. Ket thuc chuong trinh");
		printf("\n");
		printf("\nHay chon phuong an: ");
		scanf("%d", &a);
		fflush(stdin);
		
		switch(a) {
			case 1:
				printf("\nTen: ");
				gets(name);
				printf("\nTuoi: ");
				scanf("%d", &age);
				fflush(stdin);
				printf("\nDia chi: ");
				gets(address);
				printf("\nEmail: ");
				gets(email);
				printf("\nGioi tinh: ");
				gets(sex);
				printf("\nSDT: ");
				scanf("%d", &number);
				fflush(stdin);
				
				
				break;
				
			case 2:
				printf("\nTen: ");
				puts(name);
				printf("\nTuoi: %d", age);
				printf("\nDia chi: ");
				puts(address);
				printf("\nEmail: ");
				puts(email);
				printf("\nGioi tinh: ");
				puts(sex);
				printf("\nSDT: %d", number);
				
				break;	
				
			case 3:
				break;
			
			default:
				printf("Vui long nhap lai.");
				
				break;		
		}
	}
	return 0;
}
