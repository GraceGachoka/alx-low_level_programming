#include "main.h"


/**
 * print_number - Prints an integer
 * @n: integer to be printed
 *
 */
void print_number(int n)
{
	int x;

	x = n;
	if (x < 0)
	{
		_putchar('-');
		x =  -n;
	}
	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	_putchar ((x % 10) + '0');
}
