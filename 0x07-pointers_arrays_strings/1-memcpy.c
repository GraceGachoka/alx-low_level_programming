#include <string.h>
#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: copied to
 * @src: copied from
 * @n: number of bytes to be copied
 * Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
