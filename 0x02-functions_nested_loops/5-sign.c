#include "main.h"

/**
 * print_sign - Print sign of a numer
 * @n: number to be checked
 *
 * Return: 1 if positive 0 if zero -1 if less
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (0);

	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
