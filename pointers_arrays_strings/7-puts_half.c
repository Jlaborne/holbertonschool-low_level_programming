#include "main.h"

/**
 * puts_half - puts_half
 * @str: pointer to a string
 *
 * Description: Print the second half of a string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	i = length / 2;

	if (i % 2 != 0)
		i++;

	for (; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
