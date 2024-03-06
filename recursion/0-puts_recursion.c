#include "main.h"
#include <stddef.h>
/**
 * _put_recursion - Print a string
 * @s: String to print*
 * Description: Prints using recursion
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s == NULL)
	{
		_putchar('\n');
		return;
	}
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
