
#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, bool_1, bool_2;
	long int num1, num2, f_num, f_num1, num11, num22;

	num1 = 1;
	num2 = 2;
	bool_1 =  bool_2 = 1;
	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 96; i++)
	{
		if bool_1
		{
			f_num = num1 + num2;
			printf(", %ld", f_num);
			num1 = num2;
			num2 = f_num;
		}
		else
		{
			if (bool_2)
			{
				num11 = num1 % 1000000000;
				num22 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				bool_2 = 0;
			}
			f_num1 = (num11 + num22);
			f_num = num1 + num2 + (f_num1 / 1000000000);
			printf(", %ld", f_num);
			printf("%ld", f_num1 % 1000000000);
			num1 = num2;
			num11 = num22;
			num2 = f_num;
<<<<<<< HEAD
			num22 = (f_num1 % 1000000000);
=======
			num22 = (f_num2 % 1000000000);
>>>>>>> 15354834d97be42ef896c347b0ac7b26d4369d17
		}
		if (((num1 + num2) < 0) && bool_1 == 1)
			bool_1 = 0;
	}
	printf("\n");
	return (0);
}
