#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define __STDC_FORMAT_MACROS
#include <inttypes.h>
/**
 * main -prints multiple 3 and 5 numbers less than 1024
 * Return: always 0 (success)
 */

int main(void)

{

	uint64_t n = 50;
	uint64_t sum = 0;
	uint64_t i;
	uint64_t a = 0;
	uint64_t b = 1;

	for (i = 1; i <= n; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (i == n)
		{
			printf("%"PRIu64"\n", sum);
			break;
		}
		printf("%"PRIu64", ", sum);
	}
	return (0);
}
