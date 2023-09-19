#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i = 0, j = 0, sum = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	while(sum*1.62 < n) {
		sum = i + j;
		printf("%d ", sum);
		i = j;
		j = sum;
		if(j==0) {
			i++;
		}
	}
	return 0;
}
