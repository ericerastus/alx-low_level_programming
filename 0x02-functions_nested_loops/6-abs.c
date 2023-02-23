#include "main.h"

/**
 * _abs - computes integer absolute value
 * @i: the integer
 *
 * Return: integer if successful
 */

int _abs(int i)
{
	if (i < 0)
		i = -i;
	else if (i > 0)
		i = +i;
	else
		i = 0;
	return (i);
}
