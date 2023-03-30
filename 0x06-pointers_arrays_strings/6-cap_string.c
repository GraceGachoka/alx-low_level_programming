#include "main.h"

/**
 * cap_string - Capitalize letters of a string
 * @n: String
 *
 * Return: capitalized string
 *
 */
char *cap_string(char *n)
{
	int x;

	x = 0;
	for (x = 0; n[x] != '\0'; x++)
	{
		if (x == 0)
		{
			if (n[x] >= 'a' && n[x] <= 'z')
			{
				 n[x] = n[x] - 32;
			}
			continue;
		}
		if ( n[x] == ' ' || '\t' || '\n' || ',' || ';' || '.' || '!' || '?' || '"' ||'(' ||')' ||'{' || '}')
		{
			x++;
			if (n[x] >= 'a' && n[x] <= 'z')
			{
				n[x] = n[x] - 32;
				continue;
			}
			else if (n[x] >= 'A' && n[x] <= 'Z')
			{
				n[x] = n[x] + 32;
			}}
	}
	return (n);
}
