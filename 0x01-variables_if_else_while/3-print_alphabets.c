#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print the alphabet in lowercase, then in uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);

	for (letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);

	putchar('\n');
	return (0);
}
