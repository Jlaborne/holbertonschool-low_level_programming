#include "main.h"

/**
 * print_most_numbers - Will print all digit from 0 to 9 but not 2 and 4
 * Description: prints digit from 0 to 9 but 2 and 4 followed by a new line
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		if (i == 2 || ch == 4)
		{
			continue;
		}
	_putchar (i + '0');
	}
	_putchar ('\n');
}
