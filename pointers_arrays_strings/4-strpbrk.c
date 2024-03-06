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
	if (s == NULL || accept == NULL)
		return (NULL);

	if (*accept == '\0')
		return (NULL);

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
	return (s);
}
