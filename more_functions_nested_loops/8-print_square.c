#include "main.h"

/**
 * print_square - Write a function that prints a square
 * @n: Number of line and character per line
 *
 * Description: Print n time a character per line n lines
 * Return: always 0
 */
void print_square(int n)
{
	int y, i;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
		{

			for (i = 0; i < n; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
