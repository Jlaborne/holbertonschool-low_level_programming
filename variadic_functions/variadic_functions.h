#ifndef VARIADIC_H
#define VARIADIC_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct type_arg
{
    char *first_char;
    char *(*f)();
} op_t;

#endif
