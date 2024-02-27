#include "main.h"

/**
 * print_triangle - Function that draw a triangle
 * @n: Size of the triangle
 *
 * Description: will print height and base is n
 *
 * Return: always 0
 */
void print_triangle(int n)
{
	int y = 1;

	for (y = 1; y <= n; y++)
	{
		int x = 0;

		for (x = 0; x < n; x++)
		{
			if (x + y >= n)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
