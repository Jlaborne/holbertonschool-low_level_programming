#include "main.h"

/**
 * puts_half - puts_half
 * @dest: copies the string in *src to *des
 * @src: destination of the copy
 * Description: Copies a sting to *dest from *src
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while(*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0'
		return (dest);
}
