#include <stdio.h>
#include <stdlib.h>
int main(){
	float x;
	scanf("%f", &x);
	printf("x = %f\n", x);
	printf("x = %e\n", x);
	printf("x = %g\n", x);
	printf("======= 8.1f ===============\n");
	printf("x = %8.1f\n", x);
	printf("x = %8.5f\n", x);
	printf("x = %8.5e\n", x);
	printf("x = %8.5g\n", x);
	printf("x = %21.15f\n", x);
	printf("x = %21.15e\n", x);
	printf("x = %21.15g\n", x);
	printf("======================\n");
	printf("x = %2.0f\n", x);
	return 0;
        x=x+1;
}
