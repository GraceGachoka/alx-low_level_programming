#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Sums yp diagonal
 * @a: array
 * @size: size of array
 * Return: 0 success
 */
void print_diagsums(int *a, int size)
{
	int S1;
	int S2;
	int x;

	S1 = 0;
	S2 = 0;
	for (x = 0; x < size; x++)
	{
		S1 = S1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		S2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", S1, S2);
}
