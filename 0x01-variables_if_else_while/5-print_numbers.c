#include <stdio.h>

/**
 * main - prints single digit numbers
 *
 * Description: main function printing
 * single digit numbers of base 10 starting from 0
 * Return: 0 if successful
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d\n", num);
	return (0);
}
