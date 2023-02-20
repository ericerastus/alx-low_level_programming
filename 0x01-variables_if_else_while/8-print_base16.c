#include <stdio.h>

/**
 * main - prints base 16 numbers
 *
 * Description: main fuction printing base 16
 * numbers in lowercase.
 * Return: 0 if successful
 */

int main(void)
{
	int num_16;
	char let_16;

	for (num_16 = 0; num_16 <= 9; num_16++)
		putchar(num_16 + '0');
	for (let_16 = 'a'; let_16 <= 'f'; let_16++)
		putchar(let_16);
	putchar('\n');
	return (0);
}
