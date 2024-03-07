#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Check the code
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Description: Program that prints the length of the array
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i, x, result;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		x = atoi(argv[2]);

		result = i * x;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
