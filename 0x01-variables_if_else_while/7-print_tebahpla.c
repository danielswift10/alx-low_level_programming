#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print the lowercase alphhabet in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
		putchar(letters);

	putchar('\n');
	return (0);
}
