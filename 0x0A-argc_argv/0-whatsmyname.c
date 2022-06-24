#include <stdio.h>

/**
 * main - a function that prints the program name, followedd by a new line
 * @argc: number of arguments supplied to the program
 * @argv: an array of pointers to the argument
 * Return: Always 0
 */

int main(int __attribute((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
