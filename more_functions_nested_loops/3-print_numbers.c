#include "main.h"

/**
 * print_numbers - Will print all digit from 0 to 9
 * Description: prints the numbers, from 0 to 9, followed by a new line.
 * Return: Nothing
 */
void print_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
	_putchar (i + '0');
	}
	_putchar ('\n');
}
