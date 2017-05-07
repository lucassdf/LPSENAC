#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int main(void) {
	int X, Y;
	int a = 1;
	scanf("%d %d", &X, &Y);
 	printf("%d ", a);
	if(X > 1 && X < 20 && Y > X && Y < 100000) {
		while(1){
			a = a + 1;
			if(a % X == 0 || X % a == 0) {
				printf("%d\n", a);
			}
			else
				printf("%d ", a);
			if(a == Y)
				break;
			
		}
	
	}
}
