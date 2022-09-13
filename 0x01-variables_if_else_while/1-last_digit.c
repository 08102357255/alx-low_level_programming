#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - getting the last digit of a number
 *
 * Return: always 0
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, last);

	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);

	else if (last < 6 && last != 0)
		print("last digit of %i is %i and is less than 6 and not 0\n" n, last);

	return (0);
}
