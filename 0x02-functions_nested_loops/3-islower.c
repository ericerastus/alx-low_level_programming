#include "main.h"

/**
 * _islower - check lowercase char
 *
 * Return: Akways 0.
 */

int _islower(int c=0)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
