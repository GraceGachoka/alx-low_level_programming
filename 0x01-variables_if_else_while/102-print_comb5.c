#include <stdio.h>

/**
 * main - Print combinatin of all numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y=0; y < 10; y++)
		{
			putchar((y % 10) + '0');
			putchar((x % 10) + '0');
			if (y != 10 || x!= 10)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
