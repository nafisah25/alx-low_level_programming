#include <stdio.h>

/**
  * main - prints positive, negative
  * or zero
  * Return: returns 0 if exits successfully.
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
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
