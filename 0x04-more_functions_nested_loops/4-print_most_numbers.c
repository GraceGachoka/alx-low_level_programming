#include "main.h"

/**
 * print_most_numbers - Print digits leaving 2 AND 9
 *
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar((n % 10) + '0');
		}
	}
	_putchar('\n');
}
