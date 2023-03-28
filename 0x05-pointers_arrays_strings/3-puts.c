#include "main.h"
#include <stdio.h>


/**
 * _puts - Prints a string
 * @str: Stri
 * ng to be copied
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
