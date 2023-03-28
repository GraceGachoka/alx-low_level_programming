#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - Copies one string onto another
 * @dest: first string
 * @src: Second string
 *
 * Return: Character
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
