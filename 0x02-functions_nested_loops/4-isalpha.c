#include "main.h"

/**
 * _isalpha - checks alhabetic character
 * @c: character to be checked
 *
 * Return: 1 if alphabetic 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
