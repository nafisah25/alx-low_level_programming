#include "main.h"

/**
  * _islower - to check for lowercase characters
  * @c: to check the case
  * Return: Always 0
  */
int _islower(int c)

{

	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
