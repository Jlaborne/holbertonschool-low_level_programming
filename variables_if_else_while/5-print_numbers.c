#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations of single-digit numbers.
 * You can only use `putchar` to print to the console.
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
