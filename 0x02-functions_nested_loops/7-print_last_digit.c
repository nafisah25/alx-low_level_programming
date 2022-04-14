#include "main.h"

/**
  * print_last_digit - function that print last digit.
  * @c: the number.
  * Return: the value of the last digit.
  */
int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
