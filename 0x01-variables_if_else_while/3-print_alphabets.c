#include <stdio.h>

/**
 * main - prints alphabet a-Z A-Z
 *
 * Description: main function printing alphabet
 * a-z in lowercase then A-Z in uppercase
 * Return: 0 if successful
 */

int main(void)
{
	char alp, alph;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
