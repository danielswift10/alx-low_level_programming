#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet in lower case
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
