#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: A pointer
 * @n: no. of elements in array
 *
 */
void reverse_array(int *a, int n)
{
	int *b;
	int x;
	int array[n];
	int temp;

	a = &array[0];
	b = &array[n - 1];
	x = 0;
	while (a < b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		a = a + 1;
		b = b - 1;
		x++;
	}
}
