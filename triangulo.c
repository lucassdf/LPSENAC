#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(void) {
	double A, B, C, Perimetro, Area;
	scanf("%lf %lf %lf",&A, &B, &C);
	if(abs(B - C) < A < B + C && 
	   abs(A - C) < B < A + C &&
	   abs(A - B) < C < A + B)
        {
		Perimetro = A + B + C; 
		printf("Perimetro = %.1lf\n",Perimetro);
        }

	else if(A >= B + C && B <= abs(A - C) && C <= abs(A - B) {
		Area = (A + B) * C / 2;
		printf("Area = %.1lf\n",Area);
	}



}
