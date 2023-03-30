#include <string.h>
#include "main.h"

/**
 * _strncpy - Copies n characters of a string
 * @dest: First string
 * @src: Second string
 * @n: no. of characters to be copied
 *
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
