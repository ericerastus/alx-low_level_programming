#include "main.h"

/**
 * print_last_digit - prints last digit of number
 *
 * Return: last digit if successful
 */

int print_last_digit(int num)
{
	/* int num, */
	int lstdig;
	
	lstdig = num % 10;

	if (lstdig < 0)
		lstdig *= -1;
	_putchar(lstdig + '0');
	return (lstdig);
}
