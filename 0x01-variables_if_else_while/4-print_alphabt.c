#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print alphabet in lowercase except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' && letters != 'q')
			putchar(letters);
	}

	putchar('\n');
	return (0);
}
