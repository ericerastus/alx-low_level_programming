#include "main.h"

/**
 * _islower - check lowercase char
 * @c: represent characters
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
