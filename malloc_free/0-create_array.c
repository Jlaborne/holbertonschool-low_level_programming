#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Function that creat an array of char
 * @size: size of the memory
 * @c: the char
 *
 * Return: A pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(c) * (size + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[size] = '\0';
	return (str);
}
