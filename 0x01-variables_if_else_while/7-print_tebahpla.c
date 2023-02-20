#include <stdio.h>

/**
 * main - prints lowercase alphabet reverse
 *
 * Description: main function printing lowercase
 * alphabet in reverse order
 * Return: 0 if successful
 */

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');
	return (0);
}
