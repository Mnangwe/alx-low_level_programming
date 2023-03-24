#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int b, fp;

	b = 612852475143;
	for (fp = 2; fp <= b; fp++)
	{
		if (b % fp == 0)
		{
			b/= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}

