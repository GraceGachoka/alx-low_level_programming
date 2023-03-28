#include "main.h"


/**
 * puts_half - Prints half of a string
 * @str: characters
 *
 */
void puts_half(char *str)
{
	int a;
	int x;
	int y;

	y = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		y++;
	}
		x = y / 2;
		if (y % 2 == 1)
		{
			x = (y + 1) / 2;
		}
		for (a = x; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
		_putchar('\n');
}
