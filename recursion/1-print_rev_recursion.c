#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to print
 * Description: Pirnt a string in reverse using recursion
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
