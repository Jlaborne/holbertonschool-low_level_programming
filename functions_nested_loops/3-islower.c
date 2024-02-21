#include "main.h"

/**
 * _islower - check if r is lowercase
 *@c: the character to be checked
 *
 *Return: 1 if TRUE 0 if FALSE
 */
int _islower(int c)
{
	if (c => 97 && c <= 122)
		return (1);
	else
		return (0);
}
