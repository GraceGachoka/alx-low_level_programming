#include <stdio.h>


/**
 * main - Entry point
 *
 * @void: No Argument
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of char: %lu byte(s)\n", sizeof(char));
	printf("The size of int: %lu byte(s)\n", sizeof(int));
	printf("The size of long int: %lu byte(s)\n", sizeof(long int));
	printf("The size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("The size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
