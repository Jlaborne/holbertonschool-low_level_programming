#include "main.h"

/**
 * rev_string - Prints a string in reverse
 * @s: pointer to a string
 *
 * Description: But the last 5 string are empty
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 6; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
