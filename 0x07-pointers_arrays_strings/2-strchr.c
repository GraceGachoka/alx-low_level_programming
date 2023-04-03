#include <string.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string being modified
 * @c: character to be located
 * Return: s
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);
	return (ptr);
}
