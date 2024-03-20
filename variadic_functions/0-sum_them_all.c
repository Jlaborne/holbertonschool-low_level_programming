#include <stdarg.h>
/*
 * sum_them_all - sums all the parameters
 * @n: the number of parameters
 * Description: This function takes a variable number of arguments and
 *              returns the sum of all the parameters.
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i = sum = 0;

	va_start(list, n);
	while (i < n)
	{
		sum += va_arg(list, unsigned int);
		i++;
	}
	va-end (list);
	return (sum);
}
