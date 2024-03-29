#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks sign of number
 *
 * Description: main function checking for
 * positive or negative sign of integer n
 * Return: 0 if successful otherwise non zero value
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
