#include "main.h"


/**
 *  print_diagonal - Print diagonal
 *  @n: umber of times the character \ should be printed
 *
 */
void print_diagonal(int n)
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
			_putchar('\\');
			_putchar('\n');
			x++;
		}
		_putchar('\n');
	}
}
