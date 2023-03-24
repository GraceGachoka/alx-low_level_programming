#include "main.h"


/**
 *  print_diagonal - Print diagonal
 *  @n: umber of times the character \ should be printed
 *
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 1; y <= n ; y++)
		{
			x = 1;
			while (x <= n)
			{
				if (x == y)
				{
					_putchar('\\');
				}
				else if (x < y)
				{
					_putchar(' ');
				}
				x++;
			}
			_putchar('\n');
		}
	}
}
