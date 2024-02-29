#include "main.h"

/**
 * *_strcat - Function that concatenates string
 * @dest: appends the string in *src to *des
 * @src: string to appends
 * Description: Append a string *dest to *src
 * Return: The pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0') {
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
