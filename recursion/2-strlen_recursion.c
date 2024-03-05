#include "main.h"

/**
 * _strlen_recursion - Fucntion that return the length of a string
 * @s: String to analyse
 * Description: Return the length using recursion
 * Return: Return the length
 */
int _strlen_recursion(char *s)
{
	static int i = 0;

	if (*s == '\0')
		return (i);
	i++;
	return _strlen_recursion(s + 1);
}
