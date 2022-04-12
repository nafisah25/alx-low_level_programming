#include <stdio.h>
#include <stdlib.h>
/**
  * main - print either positive, negatob, or zero
  *
  * Return: returns 0 if turns succeaafully.
  */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar('0' + e);
						putchar(' ');
					}
				}

				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
