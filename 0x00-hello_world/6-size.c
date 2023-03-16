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
	printf("The size of integers is %lu bytes\n", sizeof(int));
	printf("The size of character is %lu bytes\n", sizeof(char));
	printf("The size of float is %lu bytes\n", sizeof(float));
	return (0);
}
