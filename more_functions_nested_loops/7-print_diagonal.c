#include "main.h"

/**
 * print_diagonal - Function that draw a diagonal
 * @n: Number of time to print '\'
 *
 * Description: will print '\' n number of times
 * one per line adding a ' ' for each line
 * Return: always 0
 */
void print_diagonal(int n)
{
    int y = 0;
    while (y < n)
    {
        int i = 0;

	for (i = 0; i < y; i++)
        {
        _putchar(' ');
        }
        _putchar(92);
        _putchar('\n');
	y++;
    }
}
