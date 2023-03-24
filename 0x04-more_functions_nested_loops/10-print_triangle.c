#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: Parameter
 *
 */
void print_triangle(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (x = 1; x <= size; x++)
	{
		for (y = x; y < size; y++)
		{
			_putchar(' ');
		}
		for (y = 1; y <= x; y++)
		{
			_putchar ('#');
		}
		_putchar('\n');
	}
	}
}
