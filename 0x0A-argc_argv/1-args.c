#include <stdio.h>

/**
 * main - a function that prints the number of arguments passed to it
 * @argc: number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
