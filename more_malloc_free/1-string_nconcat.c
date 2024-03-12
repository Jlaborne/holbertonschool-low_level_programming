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
	unsigned int len, i;
	char *dest;

	len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	dest = malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		dest[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		dest[len++] = s2[i];

	dest[len] = '\0';
	return (dest);
}
