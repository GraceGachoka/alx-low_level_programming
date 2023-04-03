#include <string.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: string to be modified
 * @b: value to be set
 * @n: Number of bytes value is to be set
 * Return: s set string
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
