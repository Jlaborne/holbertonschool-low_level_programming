#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of diagonals of a square matrix of integers
 * @a: string to analyze
 * @size: characters to match
 * Description: Analyze a string and return the number of bytes matching
 * Return: Returns the number of bytes
 */
void print_diagsums(int *a, int size)
{
	int x, y, sumsa, sumsb;

	sumsa = sumsb = 0;
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			if (x == y)
				sumsa += *((a + y * size) + x);
			if (x == size - 1 - y)
				sumsb += *((a + y * size) + x);
		}
	}
	printf("%d, %d\n", sumsa, sumsb);
}
