#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -prints multiple 3 and 5 numbers less than 1024
 * Return: always 0 (success)
 */

int main(void)

{

	int n = 50;
	long long int sum = 0;
	int i;
	int a= 0;
	int b= 1;
	
	for (i = 1; i <= n; i++)
	{
		sum = a + b;
		a=b;
		b=sum;
		printf("%ld, ", sum);
	}
	return (0);
}
