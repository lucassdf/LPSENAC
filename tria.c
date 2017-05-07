#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void) {
	double A, B, C;
	double Perimetro, Area;
	scanf("%lf %lf %lf",&A, &B, &C);
	if(A < B + C && B < A + C && C < A + B) {
		Perimetro = A + B + C;
		printf("Perimetro = %.1lf\n",Perimetro);
	   }
	else {
		Area = ((A + B) * C) / 2;
	   	printf("Area = %.1lf\n",Area);
	}
	

}

