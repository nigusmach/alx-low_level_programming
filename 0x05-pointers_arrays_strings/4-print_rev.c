/*
 * File: 4-print_rev.c
 * Auth: Nigus Machin
 */

#include "main.h"

/**
 * print_rev - to  prints a string, in reverse, .
 * @str: The string to be printed.
 */
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
	for (c = c - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
