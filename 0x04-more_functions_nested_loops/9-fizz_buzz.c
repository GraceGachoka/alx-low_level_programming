#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			if (i != 100)
			{
			printf("FizzBuzz");
			printf(" ");
			}
			else if (i == 100)
			{
				printf("FizzBuzz");
			}
		}
		if (i != 100)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
				printf(" ");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
				printf(" ");
			}
			else
			{
				printf("%d", i);
				printf(" ");
			}
		}
	}
		printf("\n");
		return (0);
}
