#include "main.h"
/**
 * cap_string - Capitalize all words of a string
 * @s: string
 * Description: Capitalize
 * Return: Always 0
 */
char *cap_string(char *s)
{
    char *p = s;

    while (*s != '\0')
    {
	if ((*s > 30 && *s < 35) || (*s > 8 && *s < 11) || (*s == 44))
	{
	    s++;
	    if (*s >= 'a' && *s <= 'z')
                *s = *s - 32;
	}
	else if (*s == 59 || *s == 46 || *s == 63 || (*s > 39 && *s < 42))
	{
	    s++;
	    if ((*s >= 'a' && *s <= 'z'))
                *s = *s - 32;
	}
	else if ((*s == 123) || (*s == 125) || (*s == 46))
	{
	    s++;
	    if (*s >= 'a' && *s <= 'z')
                *s = *s - 32;
	}
    }
    return (p);
}
