#include "main.h"
int prime_calc(int n, int guess);
/**
 * is_prime_number - Verifiy if n is a prime number
 * @n: integer
 * Return: 1 if true 0 if false
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_calc(n, 2));
}
/**
 * prime_calc - Recursivly verify if n is prime
 * @n: integer
 * @guess: dividor
 * Return: 1 if true 0 if false
 */
int prime_calc(int n, int guess)
{
	if (guess * guess > n)
		return (1);
	else if (n % guess == 0)
		return (0);
	return prime_calc(n, guess + 1);
}
