#include "main.h"

/**
  * more_numbers - prints numbers from 0 to 14
  *
  */

void more_numbers(void)
{
	int c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
			{
				_putchar((d / 10) + 48);
			}
			_putchar((d % 10) + 48);
		}
		_putchar(10);
	}
}
