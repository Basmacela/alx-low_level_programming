#include "main.h"

/**
 * _strcat -concatenates two strings
 *
 * @dest: A pointer charachter dest
 *
 * @src: A pointer charachet src
 *
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
