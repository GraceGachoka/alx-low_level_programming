#include <stdio.h>
#include "main.h"

/**
 * print_array - Print elements of array
 * @a: pointer
 * @n: no; of elements in array
 *
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n - 1; x++)
	{
		printf("%d", a[x]);
		printf(",");
		printf(" ");
	}
	if (x == n - 1)
	{
		printf("%d", a[x]);
	}
	printf("\n");
}
