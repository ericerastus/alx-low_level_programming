#include <unistd.h>

/**
 * main - prints stderr string
 *
 * Descritption: main function printing text string to standard error
 * Return: 1 if successful
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
