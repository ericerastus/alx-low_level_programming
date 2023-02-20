#include <stdio.h>

/**
 * main - prints single digit nos
 *
 * Description: main function printing possible
 * combinations of single digit numbers
 * Return: 0 if successful
 */

int main(void)
{
	int num = 0;

	while (num < 9)
	{
		putchar(num + '0');
		putchar(44);
		putchar(32);
		num++;
	}
	putchar(57);
	return (0);
}
