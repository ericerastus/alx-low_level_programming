#include <stdio.h>

/**
 * main - prints alphabet a-z
 *
 * Description: main function printing alphabet letters a-z in lower case
 * Return: 0 if successflul
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	return (0);
}
