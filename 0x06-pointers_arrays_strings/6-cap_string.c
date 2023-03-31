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
	while (n[x] != '\0')
	{
		while (!(n[x] >= 'a' && n[x] <= 'z'))
		{
			if (n[x] == ' ' || '\t' || '\n' || ',' || ';' || '?' || '(' || ')' || '{' || '}' || '"' ||x == 0)
			{
				n[x] = n[x] - 32;
			}
			x++;
		}
	}
	return (n);
}
