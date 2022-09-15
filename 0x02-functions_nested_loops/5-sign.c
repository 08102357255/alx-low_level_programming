#include "mai.h"

/**
 * print_sign - print the sign oa number
 *
 * @n: number to print it sign
 * Return: 1 if positive, -1 if negative and o if Zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n < 0)
	{
		_putcher('_');
		return (-1);
	}
	else
		_putcher('0');
	return (0);
}
