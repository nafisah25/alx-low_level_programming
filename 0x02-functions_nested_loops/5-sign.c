#include "main.h"

/**
  * print_sign - check numbers.
  * @n: number to check
  * Return: Always 0.
  */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
		_putchar(r + '0');
		_putchar('\n');
	}
	else if (n < 0)
	{
		r = -1;
		_putchar('-');
		_putchar(r + '0');
		_putchar('\n');
	}
	else
	{
		r = 0;
		_putchar(0);
		_putchar(r + '0');
		_putchar('\n');
	}

	return (r);
}
