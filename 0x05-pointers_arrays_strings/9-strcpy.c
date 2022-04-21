#include "main.h"
#include <stdio.h>

/**
  * _strcpy - copies the string pointed to by src
  * @dest: a pointer to a char to be changed
  * @src: a poi ter to a char to be changed
  * Return: nothing
  */

char *_strcpy(char *dest, char *src)
{

	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
