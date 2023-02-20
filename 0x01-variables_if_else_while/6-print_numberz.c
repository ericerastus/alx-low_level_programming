#include <stdio.h>

/**
 * main - prints dingle digit number base 10
 *
 * Description: main function printing
 * single digit number of base 10 from 0 to 9
 * Return: 0 if successful
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
