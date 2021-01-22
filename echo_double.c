#include <stdio.h>
#include <stdlib.h>
int main(){
	double x;
	scanf("%lf", &x);
	printf("x = %f\n", x);
	printf("x = %e\n", x);
	printf("x = %g\n", x);
	printf("x = %8.5f\n", x);
	printf("x = %8.5e\n", x);
	printf("x = %8.5g\n", x);
	printf("x = %21.15f\n", x);
	printf("x = %21.15e\n", x);
	printf("x = %21.15g\n", x);
	return 0;
}
