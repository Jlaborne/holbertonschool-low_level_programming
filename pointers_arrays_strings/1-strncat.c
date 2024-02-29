#include "main.h"
/**
 * *_strncat - Function that concatenates string
 * @dest: appends the string in *src to *des
 * @src: string to appends
 * @n: int
 * Description: Append a string *dest to *src
 * Return: The pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
		dest[n + i] = src[i];
	dest[n + i] = '\0';
	return (dest);
}
