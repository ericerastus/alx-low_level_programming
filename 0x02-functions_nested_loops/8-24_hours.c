#include "main.h"
#include <unistd.h>
/**
 * jack_bauer - prints every min of day
 *
 * Return: no value
 */

void jack_bauer(void)
{
	int hrs, min;

	hrs = 0;
	while (hrs < 24)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hrs / 10 + '0');
			_putchar(hrs % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
		hrs++;
	}
}
