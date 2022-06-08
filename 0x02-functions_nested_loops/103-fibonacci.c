#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1, num2, f_num, sum_num;

	num1 = 1;
	num2 = 2;
	f_num = sum_num = 0;
	while (f_num <= 4000000)
	{
		f_num = num1 + num2;
		num1 = num2;
		num2 = f_num;
		if ((num1 % 2) == 0)
		{
			sum_num += num1;
		}
	}
	printf("%ld\n", sum_num);
	return (0);
}
