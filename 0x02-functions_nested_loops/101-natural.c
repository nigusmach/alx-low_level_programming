#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	return (0);
}

/**
 * prints -sum of multiple 3and 5 numbers less than 1024
 * Return: the sum
 */
void prin_sum(void)
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
}
