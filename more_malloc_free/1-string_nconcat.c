#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - point to a newly allocated space in memory
 * which contains s1, followed by the first n bytes of s2
 * @s1: String 1
 * @s2: String 2
 * @n: N bytes of S2 to concatenates
 * Return: Pointer or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *dest;

	while (s1 != NULL && s1[len1] != '\0')
	{
		len1++;
	}
	while (s2 != NULL && s2[len2] != '\0' && len2 < n)
	{
		len2++;
	}
	dest = malloc(len1 + len2 + 1);
	while (s1 != NULL && s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2 != NULL && j < len2)
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
