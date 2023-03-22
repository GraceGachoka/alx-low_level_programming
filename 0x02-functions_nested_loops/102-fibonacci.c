#include <stdio.h>

/**
 * main - Print fibonacci numbers
 *
 * Retrn: Fibonacci
 */
int main(void)
{
	int n;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long sum;

	for (n = 0; n < 50; n++)
	{
		sum = a+b;
		printf("%lu",sum);
		printf(",");
		printf("\t");
		a = b;
		b = sum;
		if (n == 49)
		{
			printf(",");
			printf("\n");
		}
	}
	return (0);
}
