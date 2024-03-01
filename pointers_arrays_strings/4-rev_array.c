#include "main.h"
/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: pointer to an array
 * @n: number of element
 * Description: Reverse the position of each integer
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int end = n - 1;

	while (i < end)
	{
		int temp = a[i];

		a[i] = a[end];
		a[end] = temp;
		i++;
		end--;
	}
}
