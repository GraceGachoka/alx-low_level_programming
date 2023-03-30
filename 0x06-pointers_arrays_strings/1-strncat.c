#include <string.h>
#include "main.h"

/**
 * _strncat - Concatenate two strings n characters only
 * @dest: First pointer
 * @src: Second pointer
 *@n: number of characters to be married
 * Return: merged string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
