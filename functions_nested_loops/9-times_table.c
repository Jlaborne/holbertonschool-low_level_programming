#include "main.h"

/**
 * times_table - Will print the 9 times tables
 * Description: will print every times tables each times per line
 * Format: 0,..7,.14
 * Return: Always 0.
 */
void times_table(void)
{
	int i, x, q;

	for (i = 0; i < 10; i++)
	{
		_putchar ('0');
		for (x = 1; q < 10; q++)
		{
			_putchar(',');
			_putchar(' ');

			q = i * x;
			if (x * q < 10)
				_putchar(' ');
			else
				_putchar((q / 10) + '0');
			_putchar((q % 10) + '0');
		}
		_putchar('\n');
	}
}
