#include "main.h"
/**
 * print_numbers - print number.
 * Return: 0
 */
void print_number(int n)
{
	if (n > 9)
	{
		_putchar(n / 10 + '0');
			_putchar(n% 10 + '0');
			
	}
_putchar('\n');
}
