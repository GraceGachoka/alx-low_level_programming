#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate a random pssword
 *
 * Return: 0 success
 */
int main(void)
{
	int pass[100];
	int a;
	int b;
	int s;

	s = 0;
	srand(time(NULL));
	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		s = s + (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - s) - '0' < 78)
		{
			b = 2772 - s - '0';
			s = s + b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
