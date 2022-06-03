#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print all single digit numbers of base 10 starting from 0
 * using only putchar and not char
 *
 * Return: Always 0
 */

int main(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
		putchar(numb);
	putchar('\n');
	return (0);
}
