#include "main.h"

/**
 * print_alphabet_x10 - print_alphabet_x10 block
 * Description: Print the alphabet 10 times followed by a new line
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
