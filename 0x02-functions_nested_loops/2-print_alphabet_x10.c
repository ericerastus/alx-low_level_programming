#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print 10 time a - z
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alp;
		for (alp = 'a'; alp <= 'z'; alp++)
			putchar(alp);
		putchar('\n');
	}
}
