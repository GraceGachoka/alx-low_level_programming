#include <stdio.h>


/**
 * main - Print natural numbers
 *
 * Return: O (Success)
 */
int main(void)
{
	int x;
	int sum = 0;
	int y;

	for (x = 1; x < 1024; x++)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
}
