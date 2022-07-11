#include "main.h"
/**
 * print_rev - func that prints a string, in reverse, followed by a new line
 * @s: declaration of s and paramters for the function
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
