#include "main.h"
#include<stdio.h>
/**
 * prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 * Return: returns sum
 */
void print_sum(void)
{
	int n=1024;
	int sum=0;
	int i;
	   
	for(i=1;i<n;i++)
	{
		if(i%3==0||i%5==0)
		{
			sum+=i;
			printf("%d, ", sum);
			printf("\n");
		}
	}
}
