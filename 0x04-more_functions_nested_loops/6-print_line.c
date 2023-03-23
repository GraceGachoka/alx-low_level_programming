#include "main.h"

/**
 * print_line - Draws a line
 * @n: times the character _ should be printed
 *
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = 0;
		while (x < n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}

