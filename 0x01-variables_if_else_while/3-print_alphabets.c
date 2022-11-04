#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp, blp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (blp = 'A'; blp <= 'Z'; blp++)
	{
		putchar(blp);
	}
	{
		putchar('\n');
	}
	return (0);
}
