#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
		if (numb != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
