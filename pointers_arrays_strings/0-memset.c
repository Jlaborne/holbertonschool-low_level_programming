#include "main.h"

/**
 * _memset - Fils memory with constant byte
 * @s: Adress
 * @b: Size of memory
 * @n: Bytes to fill
 * Description: Fils memory with constant byte
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned  int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
