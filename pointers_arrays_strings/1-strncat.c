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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
