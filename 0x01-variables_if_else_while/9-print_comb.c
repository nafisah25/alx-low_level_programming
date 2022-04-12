#include <stdio.h>

/**
  * main - prints either positive, negative or zero
  *
  * Return: returns 0 if exits successfully.
  */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
