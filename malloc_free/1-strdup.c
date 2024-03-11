#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *create_array - Function that creat an array of char
 * @size: size of the memory
 * @c: the char
 *
 * Return: A pointer to the array or NULL if it fails
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
