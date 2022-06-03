#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int numb;
	char letters;

	for (numb = '0'; numb <= '9'; numb++)
		putchar(numb);
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);

	putchar('\n');
	return (0);
}
