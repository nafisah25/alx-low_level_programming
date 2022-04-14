#include "main.h"
#include <stdio.h>

/**
  * _abs - computes the absolute value of an integer.
  * @c: to check the code.
  * Return: Always 0
  */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
