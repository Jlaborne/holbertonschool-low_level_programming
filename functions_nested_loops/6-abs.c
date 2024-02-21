#include "main.h"
/**
 * _abs - Write the absolute value of an integer
 *@int: the integer
 *
 *Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
