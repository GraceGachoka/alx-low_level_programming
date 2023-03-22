#include <stdio.h>


/**
 * main - Prints ecen fibonacci
 *
 * Return: sum of even fibonacci
 */
int main(void)
{
	int n;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long sum;
	unsigned long even = 0;

	for (n = 0; n < 34; n++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (a % 2 == 0 && a < 4000000)
		{
			even = even + a;
			printf("%lu", even);
		}
	}
	printf("\n");
	return (0);
}
