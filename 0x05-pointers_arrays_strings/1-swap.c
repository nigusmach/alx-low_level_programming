#include "main.h"
/**
 * swap_int - that swaps the values of two integers.
 * @a: declaration of a and paramters for the function swap_int
 * @b: declaration of b and paramters for the function swap_int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
