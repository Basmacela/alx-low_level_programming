#include "main.h"

/**
 * function that prints a string by new line
 *
 *@s: pointer string
 *
 * Return: nothing
 *
*/
void _puts(char *str)
{
	int i =  0;

	while (str[i] != '\0')
		i++;

	while (i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
