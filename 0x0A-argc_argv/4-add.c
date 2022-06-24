#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a funtion that prints the addition of positive numbers,
 * followed by a new line
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 * Return: if one of the numbers contains symbols that are non-digits,-1
 * otherwise, return 0
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; ++i)
	{
		for (j = 0; argv[i][j] != '\0'; ++j)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
