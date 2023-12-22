#include "./Include/addition.h"
#include "./Include/division.h"
#include "./Include/modulus.h"
#include "./Include/multiplication.h"
#include "./Include/subtraction.h"
#include <stdio.h>

int main(void)
{
	printf("30 + 70 = %ld\n",add(30,70));
	printf("7  / 2  = %f\n",div(7,2));
	
	printf("5  %% 2  = %d\n",mod(5,2));
	
	printf("3  * 30 = %ld\n",mul(3,30));
	printf("30 - 20 = %d\n",sub(30,20));
	
	return 0;
}

