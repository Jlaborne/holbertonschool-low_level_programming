#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: chess board to print
 * Description: print each char of the chess
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i, y;

	y = 0;

	while (y < 8)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[y][i]);
		}
		_putchar('\n');
		y++;
	}
}
