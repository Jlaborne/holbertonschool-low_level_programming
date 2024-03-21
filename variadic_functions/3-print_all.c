#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * print_char - Print a single character.
 * @arg: A va_list containing the character to print.
 *
 * Description: This function takes a va_list argument and prints a single
 * character from it.
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}
/**
 * print_int - Print an integer.
 * @arg: A va_list containing the integer to print.
 *
 * Description: This function takes a va_list argument and prints an integer
 * from it.
 */
void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}
/**
 * print_float - Print a floating point number.
 * @arg: A va_list containing the floating point number to print.
 *
 * Description: This function takes a va_list argument and prints a floating
 * point number from it.
 */
void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}
/**
 * print_string - Print a string.
 * @arg: A va_list containing the string to print.
 *
 * Description: This function takes a va_list argument and prints a string
 * from it. If the string is NULL, it prints "(nil)" instead.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
/**
 * print_all - Print a list of arguments based on a given format string.
 * @format: A format string indicating the types of the arguments to print.
 *           Format string can include the characters 'c', 'i', 'f', and 's'
 *           representing character, integer, floating point number, and string
 *           respectively.
 *           Example: "cis" means character, integer, string.
 *           Note: The format string must be NULL-terminated.
 *
 * Description: This function takes a variable number of arguments and a format
 *              string. It iterates through the format string and prints
 *              each argument according to its corresponding format specifier.
 *              The format string determines the types of arguments to expect.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i, j;
	char *separator;
	var_print func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	separator = "";
	i = j = 0;

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;

		while (func[j]._char != NULL && format[i] != *(func[j]._char))
			j++;

		if (func[j]._char != NULL)
		{
			printf("%s", separator);
			func[j].print(list);
			separator = ", ";
		}

		i++;
	}

	printf("\n");
	va_end(list);
}
