#include "main.h"

/**
 * _memcpy - Copies N bytes from src to dest
 * @dest: the address of memory to copy
 * @src: the address of the destination of the copy
 * @n: number of bytes
 * Description: Copy to another destination
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned  int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
