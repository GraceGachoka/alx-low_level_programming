#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: A pointer
 * @n: no. of elements in array
 *
 */
void reverse_array(int *a, int n)
{
	int x;
	int temp;

	for (x = 0; x < n; x++)
	{
		temp = a[0];
		a[0] = a[n - 1];
		a[n - 1] = temp;
	}
}
