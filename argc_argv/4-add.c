#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Check the code
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Description: Program that prints the sum of two integer
 * Return: always 1 if there is non digit
 */
int main(int argc, char * argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		char *endptr;
		long int ver_char = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			printf("Error");
			return (1);
		}
		else
			sum += ver_char;
	}
	printf("%d\n", sum);
	return (0);
}
