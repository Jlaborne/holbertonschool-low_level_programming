#include "main.h"
/**
 * string_toupper - Change lowercase letter to uppercase
 * @s: string
 * Description: minus 32 each lowercase letter ascii value
 * Return: Always 0
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}
	return (p);
}
