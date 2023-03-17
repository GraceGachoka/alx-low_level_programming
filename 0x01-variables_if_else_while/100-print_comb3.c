#include <stdio.h>


/**
 * main - Print a diagonal table
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int x;
	int y;

	for (y = 0; y < 9; y++)
	{
		for (x = 0; x < 10; x++)
		{
			if (x > y)
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
