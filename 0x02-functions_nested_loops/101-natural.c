#include "main.h"
#include<stdio.h>
/**
 * prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 * Return: returns sum
 */
int sum(void)
{
  int n=1024;
  int sum=0;
 
  while(n!=0)
  {
  if(n%3==0||n%5==0)
    sum+=n;
    n--;
    }
return sum;
}