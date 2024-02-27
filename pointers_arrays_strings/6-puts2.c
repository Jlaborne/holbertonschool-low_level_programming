#include "main.h"

/**
 * puts2 -  Prints every even character
 * @str: pointer to a string
 *
 * Description: Print the string skipp 0 and odd
 * Return: Always 0
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		if (str[length] % 2 == 0)
		{
			_putchar(str[length]);
		}
		length++;
	}
	_putchar('\n');
}
