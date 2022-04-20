#include "main.h"
#include <stdio.h>

/**
  * _strlen - function that returns the length of a string
  *
  * @s: an input string
  * Return: nothing
  */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
