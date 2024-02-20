#include <stdio.h>

/**
 * main - main block
 * Description: Print alphabet in reverse.
 * You can only use `putchar` to print to the console.
 * You can only use `putchar` up to four times.
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch => 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
