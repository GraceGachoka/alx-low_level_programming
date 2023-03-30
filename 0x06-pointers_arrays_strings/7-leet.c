#include "main.h"


/**
 * leet -  encodes a string into 1337
 * @a: String
 *
 * Return: encoded string
 *
 */
char *leet(char *a)
{
	int x;
	int b;
	char string[] = "aAeEoOtTlL";
	char string2[] = "4433007711";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a[x] == string[b])
			{
				a[x] = string2[b];
			}
		}
	}
	return (a);
}

