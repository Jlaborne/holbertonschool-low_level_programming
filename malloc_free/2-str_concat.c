#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat -
 * @s1: the the string
 * @s2:
 * Return: A pointer to the string or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;

	dest = malloc(strlen(s1) + strlen(s2) +1);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	strcpy (dest, s1);
	strcat (dest, s2);
	return (dest);
}
