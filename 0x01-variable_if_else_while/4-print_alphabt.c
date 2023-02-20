#include <stdio.h>

/**
 * main - print alphabet a-z exclude q&e
 *
 * Description: main function printing alphabet a-z lowercase excluding letters q&e
 * Return: 0 if successful
 */

int main(void)
{
	char alp = 'a';

	while (alp != 'e' || alp != 'q' && alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	return (0);
}
