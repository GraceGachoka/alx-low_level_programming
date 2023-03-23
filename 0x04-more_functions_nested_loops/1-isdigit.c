#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Check if digit
 * @c: formal parameter
 *
 * Return: 1 if digit else return 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
