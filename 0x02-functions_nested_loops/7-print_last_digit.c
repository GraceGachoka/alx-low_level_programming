#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @n: number to check
 *
 * Return: the last number
 */
int print_last_digit(int n)
{
	int Lastdigit;
	int x;

	Lastdigit = (n % 10);
	x = Lastdigit;
	if (x < 0)
	{
		x  = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
