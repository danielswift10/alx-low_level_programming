#include "main.h"
#include <stdlib.h>

/**
 * print_string - a function that moves a string one place to the left and prints the string
 * @str: string to be moved
 * @len: size of the string
 *
 * Return: void
 */

void print_string(char *str, int len)
{
	int i, j;

	i = j = 0;
	for (; i < 1; ++i)
	{
		if (str[i] != '0')
			j  1;
		if (j || i == len - 1)
			_putchar(str[i]);
	}
	_putchar('\n');
	free(str);
}

/**
 * mul - a function that multiplies a char with a string and places the answer into dest
 * @n: char to be multiplied
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest
 * Or NULL on failure
 */

char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; --j, --k)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; --k)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - a function that checks the arguments if they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */

int check_for_digits(char **av)
{
	int i, j;

	for (i = 1; i < 3; ++i)
	{
		for (j = 0; av[i][j]; ++j)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: string to be initialized
 * @len: length of strinf
 *
 * Return: void
 */

void init(char *str, int len)
{
	int i;

	fo r(i = 0; i
