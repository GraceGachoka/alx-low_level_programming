#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - Print a stringin reverse
 * @s: string
 *
 */
void print_rev(char *s)
{
	strrev(*s);
	_putchar(*s);
	_putchar('\n');
}
