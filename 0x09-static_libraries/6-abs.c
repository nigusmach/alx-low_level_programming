#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: parameter for the array
 * @b: parameter for the values in the array
 * @n: parameter for the number of times to print the new values
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
