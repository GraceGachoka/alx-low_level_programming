#include "main.h"


/**
 * print_rev - Print a stringin reverse
 * @s: string
 *
 */
void print_rev(char *s)
{
	int x;
	int y = 0;

	while (*s != '\0')
	{
		s++;
		y++;
	}
	s--;
	for (x = y; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
