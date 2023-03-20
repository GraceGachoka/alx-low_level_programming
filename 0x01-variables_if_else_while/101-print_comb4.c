#include <stdio.h>


/**
 * main - Print a combination of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 9; x++)
	{
		for (y = 1; y < 10; y++)
		{
			for (z = 2; z < 10; z++)
			{
				if (z > y && y > x)
				{
					putchar((x % 9) + '0');
					putchar((y % 10) + '0');
					putchar((z % 10) + '0');
					if (x != 8 || y != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
