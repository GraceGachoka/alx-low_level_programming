#include <ctype.h>
#include "main.h"

/**
 * _islower - Check if c is lowercase
 *@c: Characer to be printed
 *
 * Return: 1 if C lower
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

