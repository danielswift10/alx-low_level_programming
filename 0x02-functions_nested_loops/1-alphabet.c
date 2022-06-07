#include "main.h"

/**
 * main - write a function that prints the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - write a function that prints the alphabet, in lowercase,
 * followed by a new line
 *
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
