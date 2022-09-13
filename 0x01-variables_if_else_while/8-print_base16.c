#include <stdio.h>

/**
 * main - hexadecimal
 *
 * Return: Always 0
 */
int main(void)
{
	char hex[16] = "0123456789abcdef";
	int i;
	int j;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			j = hex[i];
			putchar(j);
		}
		else
		{
			j = hex[i];
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
