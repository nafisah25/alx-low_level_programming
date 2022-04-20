#include "main.h"

/**
  * swap_int - a function that swap the value of two integers
  *
  * @a: first integer
  * @b: second integer
  * Return: Nothing
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
