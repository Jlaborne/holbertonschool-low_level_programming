#ifndef VARIADIC_H
#define VARIADIC_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * typedef struct type_arg
 *
 * @char_type: Char that give a type
 * @print: Function pointer to a function that print
 */
typedef struct type_arg
{
    char *first_char;
    void (*print)(va_list arg);
} var_print;

#endif
