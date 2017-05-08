#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int main(void) {
	int N;
	int a = 1;
	scanf("%d",&N);
	printf("%d ",a);
	while(1) {
		a = a + 1;
		if(a % 4 == 0) {
			printf("PUM\n");
		}
		else
			printf("%d ",a);
		if(a == N * 4){
			break;
		}
		
		
	
	}
	return 0;
}

