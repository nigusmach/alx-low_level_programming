#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -prints multiple 3 and 5 numbers less than 1024
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 4000000;
	int sum = 0;
	int i;
	int a= 0;
	int b= 1;
	int feb;

	for (i = 1; i <= n; i++)
	{
		feb=a+b;
		a = b;
		b = feb;
		if (feb%2 == 0)
		{
			sum += feb;
			printf("%d", sum);
			printf("\n");
		}
	}
	return (0);
}
