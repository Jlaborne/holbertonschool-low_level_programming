#include "main.h"

/**
 * print_line - Prints '_' a defined number of time
 * @n: Number of time to print '_'
 *
 * Description: will print '_' n number of times followed by a new line
 *
 * Return: always 0
 */
void print_line(int n)
{
	while (n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
