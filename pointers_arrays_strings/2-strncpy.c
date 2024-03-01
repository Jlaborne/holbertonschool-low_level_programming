#include "main.h"
/**
 * *_strncpy - Function that copy a string
 * @dest: pointer to the destination of the copy
 * @src: pointer to the string being copyed
 * @n: le nombre de bytes being copyed
 * Description: copy a string *dest to *src
 * Return: The pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i =0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
