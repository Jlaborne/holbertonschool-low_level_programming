#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

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
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i, j;
	var_print function[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;

		while (function[j]._char != NULL && format[i] != *(function[j]._char))
			j++;

		if (function[j]._char != NULL)
		{
			function[j].print(list);
		}

		if (i < strlen(format) - 1 && function[j]._char != NULL)
			printf(", ");

		i++;
	}

	printf("\n");
	va_end(list);
}
