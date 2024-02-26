#include "main.h"

/**
 * _isdigit - check if c is a digit (0 through 9)
 *@c: the character to be checked
 *
 *Return: 1 if TRUE 0 if FALSE
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
