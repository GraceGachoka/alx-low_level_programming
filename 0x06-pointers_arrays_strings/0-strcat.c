#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: First pointer
 * @src: Second pointer
 *
 * Return: Merged string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
