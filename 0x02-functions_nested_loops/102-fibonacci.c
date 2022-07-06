#include "main.h"

#include <stdio.h>

#include <stdlib.h>

/**
 *
 *  * main -prints multiple 3 and 5 numbers less than 1024
 *
 *   * Return: always 0 (success)
 *
 *    */

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
