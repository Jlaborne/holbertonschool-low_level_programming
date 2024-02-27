#include "main.h"

/**
 * rev_string - Prints a string in reverse
 * @s: pointer to a string
 *
 * Description: But the last 5 string are empty
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0;
	char *begin, *end, temp;
	while (s[i] != '\0')
	{
		i++;
	}

	begin = s;
	end = s + i -1;

	while (begin < end)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;
		begin++;
		end--;
	}
}
