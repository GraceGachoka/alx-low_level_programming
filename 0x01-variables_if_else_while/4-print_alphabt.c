#include <stdio.h>


/**
 * main - Print lowercase letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' || 'q')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
