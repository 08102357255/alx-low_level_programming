#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program to print if a random number generated  is
 * negative or positive 
 *
 * Return: aways 0
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if (n > 0)
    print("%d is negative\n" , n);
  else
    prin("%d is zero\n", n);
  return (0);
}
