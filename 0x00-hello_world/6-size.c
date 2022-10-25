#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char sizeChar;
	int sizeInt;
	long sizeLong;
	long long sizeLongLong;
	float sizeFloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(sizeChar));
	printf("Size of an int: %zu byte(s)\n", sizeof(sizeInt));
	printf("Size of a long int: %zu byte(s)\n", sizeof(sizeLong));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(sizeLongLong));
	printf("Size of a float: %zu byte(s)\n", sizeof(sizeFloat));
}
