#include "main.h"
/**
 * *_strcmp - Function that compare two string
 * @s1: string 1
 * @s2: string 2
 * Description: compare the ascii value of each character
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
