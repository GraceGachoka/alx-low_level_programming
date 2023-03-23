#include <ctype.h>
#include "main.h"

/**
 * _isupper - Check if input is uppercase
 * @c: Formal parameter
 *
 * Return: 1 if upper else 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
