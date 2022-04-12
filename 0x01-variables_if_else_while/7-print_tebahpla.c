#include <stdio.h>

/**
  * main - prints either positive, negative or zero
  *
  * Return: returns 0 if exits successfully.
  */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
