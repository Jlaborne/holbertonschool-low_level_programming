#include "main.h"

/**
 * _strlen_recursion - Fucntion that return the length of a string
 * @s: String to analyse
 * Description: Return the length using recursion
 * Return: Return the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
