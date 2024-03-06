#include "main.h"
#include <stdio.h>
/**
 * main
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Description: Program that prints his name
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
