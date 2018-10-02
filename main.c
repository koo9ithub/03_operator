#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int int1;
	int int2;
	int int3;
	
	printf("input three numbers:");
	scanf("%i %i %i", &int1, &int2, &int3);
	
	printf("the mean of %i, %i, %i is: %f\n", int1, int2, int3, (double)(int1+int2+int3)/3);	
	
	return 0;
	
}
