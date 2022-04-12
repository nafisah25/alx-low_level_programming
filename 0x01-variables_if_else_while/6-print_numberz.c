#include <stdio.h>

/**
  * main - print positive, negative or zero
  *
  * Return: returns 0 if exits well.
  */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(48+c);
		c++;
	}
	putchar('\n');
	return (0);
}
