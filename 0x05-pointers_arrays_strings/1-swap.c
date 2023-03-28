#include "main.h"

/**
 * swap_int - Swap two integers
 * @a: First pointer
 * @b: second pointer
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
