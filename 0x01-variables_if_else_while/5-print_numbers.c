#include <stdio.h>

/**
  * main - prints positive, negative
  * or zero
  * Return: returs 0 if exits successfully.
  */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num = num + 1;
	}
	printf('\n');
	return (0);
}
