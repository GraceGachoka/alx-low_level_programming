#include "main.h"

/**
 *  print_times_table - Prints 100 times table
 *  @n: Variable name for a multiple
 *
 *  Return: Times table
 */
void print_times_table(int n)
{
	int x;
	int y;
	int p;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{	
		for (y = 0; y <= n; y++)
		{
			p = y * x;
			if (y == 0)
			{
				_putchar(p + '0');
			}
			if (p < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p >= 10 && p < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((p / 10) +  '0');
				_putchar((p % 10) + '0');
			}
			else if (p >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 100) +  '0');
				_putchar(((p / 10) % 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
		}
	}
}
