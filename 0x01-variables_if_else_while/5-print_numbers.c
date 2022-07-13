/*
 * File: 5-print_numbers.c
 * Auth: Nigus Machin
 */
#include <stdio.h>
/**
 * main - Prints all single digit numbers starting from 0.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
