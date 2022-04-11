#include <stdio.h>

/**
  * main - print positive, negative 
  * or zero
  * Return: returns 0 if successful.
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z');
	{
	if (c != 'e' && c != 'q')
	{
		putchar(c);
	}
	c++;
	}
	putchar('\n');
	return (0);
}

