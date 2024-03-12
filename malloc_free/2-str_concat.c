#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: A pointer to the string or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len1++;
	dest = malloc(sizeof(char) * len1);
	if (dest == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		dest[len2++] = s1[i];
	for (i = 0; s2[i]; i++)
		dest[len2++] = s2[i];
	return (dest)
}
