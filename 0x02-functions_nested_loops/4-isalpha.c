#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Check for letters
 * @c: character to be checked
 *
 * Return: 1 if success else 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
