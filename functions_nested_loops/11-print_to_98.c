#include "main.h"

/**
 * print_to_98 - Will prints all natural numbers from n to 98
 * @n: the number at witch the print will start
 * Description: will prints all natural numbers from n to 98
 * format : n, n, n, .., 98$
 * Return: Always 0.
 */
void print_to_98(int n)
{
	#include <stdio.h>
int
main ()
{
  int n = -283;
  while (n != 98)
	{
	  if (n <= -100)
		{
		  putchar ('-');
		  //n = -n;
		  putchar ((n * -1 / 10) / 10 + '0');
		  putchar ((n * -1 / 10) % 10 + '0');
		  putchar ((n * -1 /10 ))
		  n++;
		}
	  if (n <= 10)
		{
		  putchar ('-');
		  putchar ((n * -1 / 10) + '0');
		  putchar ((n * -1 % 10) + '0');
		  n++;
		}
	  if (n >= 100)
		{
		  putchar ((n / 10) / 10 + '0');
		  putchar ((n % 10) % 10 + '0');
		  n++;
		}
	  if (n >= 10)
		{
		  putchar ((n / 10) + '0');
		  putchar ((n % 10) + '0');
		  n++;
		}
	  else
		{
		  putchar (n + '0');
		}
	}
	putchar ('9');
	putchar ('8');
	return (0);
}
