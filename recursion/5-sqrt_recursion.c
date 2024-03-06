#include "main.h"
int square_calc(int n, int guess);
/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: integer
 * Return: The natural square of n or -1 if n has not a natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_calc(n, 1));
}

/**
 * square_calc - Function to find the square root recursively
 * @n: Number to calculate the square root of
 * @guess: Current guess for the square root
 * Return: Square root of n if it's a perfect square, -1 otherwise
 */
int square_calc(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	return (square_calc(n, guess + 1));
}
