#include <stdio.h>


/**
 * main Print a diagonal table
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 1; x < 10; x++)
	{
		for (y = 0; y < 9; y++)
		{
			if (y < x)
			{
				putchar((y % 9) + '0');
				putchar((x % 10) + '0');
				if (x != 9 || y != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
