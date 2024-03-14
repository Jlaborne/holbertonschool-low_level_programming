#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that liberate memory
 * @d: pointer of dog_t
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	free(d);
}
