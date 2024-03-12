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
	char *dest;

	dest = malloc(strlen(s1) + strlen(s2) + 1);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	strcpy(dest, s1);
	strncat(dest, s2, n);
	return (dest);
}
