#include <stdio.h>
int main ()
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
			printf (" ");
			i++;
			continue;
		}
		printf("%d ", i);
		i++;
	}
	return 0;
}
