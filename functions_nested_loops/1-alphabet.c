#include "main.h"

/**
 * Function print_alphabet that use _putchar
 * Description: Print the alphabet followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
