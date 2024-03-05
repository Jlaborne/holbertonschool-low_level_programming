#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to analyze
 * @needle: substing to locate
 * Description: Analyze a string and return the number of bytes matching
 * Return: Returns a pointer of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = needle;
		char *b = haystack;

		while (*a != '\0' && *a == *b)
		{
			a++;
			b++;
		}
		if (*a == '\0')
			return (haystack);
		haystack++;
	}
	return (haystack);
}
