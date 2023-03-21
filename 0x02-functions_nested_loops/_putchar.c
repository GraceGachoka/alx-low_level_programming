#include <unistd.h>
#include "main.h"

/**
 * _putchar - function name
 * @c/ character o print
 *
 * Return: on Succes 1
 *
 *  On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
