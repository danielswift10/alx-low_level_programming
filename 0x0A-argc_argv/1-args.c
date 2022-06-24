#include <stdio.h>

/**
 * main - a function that prints the number of arguments passed to it
 * @argc: number of arguments supplied to the program
 * @argc: an array of pointers to the arguments
 * Return: Always 0
 */

int main(int argc, char __attribute__((__unused__)) *argc[])
{
	printf("%d\n", argc - 1);
	return (0);
}
