#include <string.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be naviigated
 * @needle: string to be located
 * Return: pointer to first occurrence of needle
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);
	return (ptr);
}
