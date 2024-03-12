#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of a string
 * @str: the the string
 *
 * Return: A pointer to the string or NULL if it fails
 */
char *_strdup(char *str)
{
	char *dest;
	int i, len;

	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
                len++;
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dest[i] = str[i];
	return(dest);
}
