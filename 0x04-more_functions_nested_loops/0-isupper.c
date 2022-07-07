#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: The int for the paramaters of my function
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
