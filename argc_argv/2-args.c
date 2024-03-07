#include "main.h"
#include <stdio.h>
/**
 * main - Check the code
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Description: Program that prints all arguments it receives
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
