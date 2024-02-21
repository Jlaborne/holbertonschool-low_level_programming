#include "main.h"

/**
 * _isalpha - check if a character is alphabetical
 *@c: the character to be checked
 *
 *Return: 1 if TRUE 0 if FALSE
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
