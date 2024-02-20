#include <stdio.h>
/**
* main - Entry point for program
*
* Return: Always 0 (success)
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		if ( ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
