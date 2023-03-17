#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 1;

	while (i <= 20)
	{
		putchar(alpha[i]);
		i++;
	}
	return (0);
}
