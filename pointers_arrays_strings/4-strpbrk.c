#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string
 * @accept: character accepted
 * Description: the fucntion locates the first occurence of any bytes in accept
 * Return: the pointer to first string found
 */
char *_strpbrk(char *s, char *accept)
{
	if (*s == '\0' || *accept == '\0')
		return ('\0');

	if (*accept == '\0')
		return ('\0');

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return ('\0');
}
