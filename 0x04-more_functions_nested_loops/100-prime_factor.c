#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143,
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	long int a, b;

	n = 612852475143;
	for (b = 2; b <= a; b++)
	{
		if (a % b == 0)
		{
			a /= b;
			b--;
		}
	}
	printf("%ld\n", b);
	return (0);
}
