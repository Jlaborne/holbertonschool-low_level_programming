#include "main.h"
#include <stdio.h>
/**
 * main
 * @argc: 
 * @argv:
 * Description: Program that prints his name
 * Return: always 0.
 */
int main(int argc,char *argv[])
{
	if (argc > 0)
		printf("%s",argv[0]);
	return(0);
}
