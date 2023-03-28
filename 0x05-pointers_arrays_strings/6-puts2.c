#include "main.h"

/**
 * puts2 - Prints every character
 * @str: string
 *
 */
void puts2(char *str)
{
	char *a = str;
	int x = 0;
	int y = 0;
	int z;

	while (*a != '\0')
	{
		a++;
		y++;
	}
	x = y - 1;
	for (z = 0; z <= x; z++)
	{
		if (str[z] % 2 == 0)
		{
			_putchar(str[z]);
		}
	}

	_putchar('\n');
}
