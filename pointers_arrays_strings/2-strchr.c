#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string
 * @s: The string
 * @c: Character to search
 * Description: Search the specified character
 * Return: the pointer to first matching character found or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
