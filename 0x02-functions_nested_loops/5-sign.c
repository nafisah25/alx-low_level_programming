#include "main.h"

/**
  * print_sign - check numbers.
  * @n: number to check
  * Return: Always 0.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 00)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
