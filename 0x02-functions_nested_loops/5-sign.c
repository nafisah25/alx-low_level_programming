#include "main.h"

/**
  * print_sign - check the code.
  * @n: to check the code.
  * Return: Always 0.
  */

int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar(0);
	}
	else
	{
		test = (-1);
		_putchar('-')
