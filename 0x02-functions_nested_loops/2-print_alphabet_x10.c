#include "main.h"

/**
  * print_alphabet_x10 - prints alphabet
  *
  * Return: return 0
  */
void print_alphabet_x10(void)
{
	int alphabet;
	int c;


	c = 0;

	while (c < 10)
		 
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		c++;
		_putchar('\n');
	}

}
