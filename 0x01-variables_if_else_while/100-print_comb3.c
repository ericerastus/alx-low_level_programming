#include <stdio.h>

/**
 * main - prints all possible comb digits
 *
 * Description: main function printing different
 * combinations of two digits
 * Return: 0 if successful
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		putchar(num1 + '0');
		for (num2 = 0; num2 < 10; num2++)
			putchar(num2 + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
