#include <stdio.h>
/**
 * main - main block
 * Description: Write a program that prints the numbers from 1 to 100
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
			if (i != 100)
			{
				printf(" ");
			}
			i++;
			continue;
		}
		printf("%d ", i);
		i++;
	}
	printf("\n");
	return (0);
}
