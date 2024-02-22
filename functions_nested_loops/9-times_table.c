#include "main.h"

/**
 * times_tables - Will print the 9 times tables
 *
 * Description: will print every times tables each times per line
 * format : x, x, ...
 * Return: Always 0.
 */
void times_table(void)
{
	int x;
	int q;

	for (x = 0; x < 10; x++)
	{
		for (q = 0; q < 10; q++)
		{
			if (x * q < 10)
			{
				_putchar((x * q) + '0');
			}
			else
			{
				_putchar((x * q) / 10 + '0');
				_putchar((x * q) % 10 + '0');
			}
			if (q < 9)
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
