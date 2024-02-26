#include "main.h"

/**
 * _islower - check if c is uppercase
 *@c: the character to be checked
 *
 *Return: 1 if TRUE 0 if FALSE
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
