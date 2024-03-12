#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat -
 * @s1: First string
 * @s2: Second string
 * Return: A pointer to the string or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1 != NULL && s1[len1] != '\0')
		len1++;
	while (s2 != NULL && s2[len2] != '\0')
		len2++;
	dest = malloc((len1 + len2 + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (s1 != NULL && s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2 != NULL && s2[j] != '\0')
	{

		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
