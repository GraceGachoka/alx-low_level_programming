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

	for (x = 0; x < n--; x++)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
	}
}
