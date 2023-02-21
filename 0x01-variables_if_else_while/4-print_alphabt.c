#include <stdio.h>

/**
 * main - print alphabet a-z exclude q&e
 *
 * Description: main function printing
 * alphabet a-z lowercase excluding letters q&e
 * Return: 0 if successful
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		if (alp != 'e' && alp != 'q')
			putchar(alp);
	putchar('\n');
	return (0);
}
