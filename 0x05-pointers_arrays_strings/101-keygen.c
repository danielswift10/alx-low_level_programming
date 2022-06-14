#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k;

	srand(time(NULL));
	for (j = 0, k = 2772; k > 122; j++)
	{
		i = (rand() % 125) + 1;
		printf("%c", i);
		k -= i;
	}
	printf("%c", k);
	return (0);
}
