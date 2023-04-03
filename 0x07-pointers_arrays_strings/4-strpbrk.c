#include <string.h>
#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: string with a matching character
 * Return:  a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	ptr = strpbrk(s, accept);
	return (ptr);
}
