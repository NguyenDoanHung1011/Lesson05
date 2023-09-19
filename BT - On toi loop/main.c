#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//bai1
	
	//bai2
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++) {
		if(N % i == 0) {
			printf("\nUoc so chung cua N: %d", i);		
		}
	}	
	
	//bai3
	printf("\n==========");
	int num, accu;
	printf("\nNhap num: ");
	scanf("%d", &num);
	
	printf("\nBang cuu chuong:");
	for(int i = 1; i <= 10; i++) {
		accu = i * num;
		printf("\n%d * %d = %d", i, N, accu);
	}
		
	return 0;
}
