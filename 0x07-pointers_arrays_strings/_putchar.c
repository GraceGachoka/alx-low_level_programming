#include <unistd.h>
#include "main.h"

/**
 * _putchar - function name
 * @c/ character o print
 *
 * Return: Always (Succes)
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
