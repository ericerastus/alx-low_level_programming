#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from n to 98
 * @n: start number
 *
 * Return: void
 */

void print_to_98(int n)
{
	getchar();

	if (n < 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	/* _putchar('\n'); */
	else
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
	_putchar('\n');
}
