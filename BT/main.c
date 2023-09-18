#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 
	//bai1.a
	int n, m, i, j, k;  
    
	printf("Chieu cao tam giac: ");  
    scanf("%d", &n);  
    m = n; 
	printf("\n"); 
    for(i = 1; i <= n; i++) {  
       	for(j = 1; j <= m-1; j++) {  
        	printf(" ");  
        }  
        for(k = 1; k <= 2*i-1; k++) {  
        	printf("*");  
        }  
        m--;  
     	printf("\n");  
    } 
	
	//bai1.b
	printf("\n==========");
	printf("\n");  
    m = n;
    
	for(i = 1; i <= n; i++) {  
	    for(j = 1; j <= m-1; j++) {  
	        printf(" ");  
	    }  
		for(k = 1; k <= 2*i-1; k++) {  
	    	if(k == 1 || k == 2*i-1 || i == n) {
	    		printf("*");  
	    	} else {  
	        	printf(" ");
			}
	    }  
	    m--;  
		printf("\n");  
	}  
	    
	//bai1.c
	printf("\n==========");
	printf("\n");  
    m = n; 
    
    for(i = 1; i <= n; i++) {
    	for(j = 1; j <= i; j++) {
    		printf("*");
		}
		printf("\n");
	}
	
	//bai1.d
	printf("\n==========");
	printf("\n");  
	
	for(i = 1; i <= n; i++) {
    	for(j = 1; j <= i; j++) {
    		if(j == 1 || j == i || i == n) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
    
    //bai2
    int a, b;
    printf("Chieu cao hinh chu nhat: ");
    scanf("%d", &a);
    printf("Chieu ngang hinh chu nhat: ");
    scanf("%d", &b);
    printf("\n");
    
    for(i = 1; i <= a; i++) {
    	for(j = 1; j <= b; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n==========");
	printf("\n");
    
    for(i = 1; i <= a; i++) {
    	for(j = 1; j <= b; j++) {
    		if(i == 1 || j == 1 || i == a || j == b) {
    			printf("*");
			} else {
				printf(" ");
			}	
		}
		printf("\n");
	}
	
	//bai3
	printf("\n==========");
	printf("Cac cach: ");
	int x, y, z, count = 0;
	
	for(x = 0; x <= 200; x++) {
		for(y = 0; y <= 100; y++) {
			for(z = 0; z<= 40; z++) {
				if(x*1000 + y*2000 + z*5000 == 200000) {
					count++;
					printf("\n%d 1000 - %d 2000 - %d 5000", x, y, z);
				}
			}
		}
	}
	printf("\n");
    printf("\nCo tat ca %d cach", count);
    
	return 0;
}
