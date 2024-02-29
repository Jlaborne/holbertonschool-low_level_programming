#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s - string to convert
 * Description: Convert a string to int
 * Return: The result of type int
 */
int _atoi(char *s)
{
	int signs = 1;
	int sum = 0;
	int final = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
			signs *= -1;
		if (*s >= '0' && *s <= '9')
		{
			sum = sum * 10 + (*s - 48);
		}
	}
	if (signs == -1)
		final = -sum;
	else
		final = sum;
	return (final);
}
