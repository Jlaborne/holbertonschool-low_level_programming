#include "main.h"

/**
 * factorial - Calculate the factorial of a given nubmer
 * @n: The given number
 * Description: Return the factorial of n
 * Return: Return the factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
