/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 1024;
	int sum = 0;
	int i;
	   
	for (i = 1; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
