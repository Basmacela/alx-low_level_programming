#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: A pointer character dest
 *
 * @src: A pointer character src
 *
 * @n: value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
