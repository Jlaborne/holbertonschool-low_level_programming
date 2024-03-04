#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to analyze
 * @accept: characters to match
 * Description: Analyze a string and return the number of bytes matching
 * Return: Returns the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				i++;
				break;
			}
			a++;
		}
		if (*a == '\0')
			break;
		s++;
	}
	return (i);
}
