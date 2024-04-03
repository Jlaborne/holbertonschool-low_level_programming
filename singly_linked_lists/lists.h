#ifndef LINKED_H
#define LINKED_H
#include <stddef.h>
#include <stdio.h>

/**
 * struct linked_list - Typedef struct
 * @char:
 * @len: Format
 * @linked_list: The function associated
 **/
typedef struct linked_list
{
	char *str;
	unsigned int len;
	struct linked_list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
