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

	if (str == NULL)
		return (NULL);
	dest = malloc(strlen(str) + 1);
	if (dest == NULL)
		return (NULL);
	strcpy(dest, str);
	return(dest);
}
