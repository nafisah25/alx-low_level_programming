#include "main.h"
#include <stdio.h>

/**
  * print_array - prints n element of an array of integers
  * followed by new line
  * @a: pointer of an int
  * @n: return value n
  * Return: void
  */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

		i++;
	}

	printf("\n");
}
