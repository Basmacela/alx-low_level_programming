#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: 0
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
	int _putchar(char c);
		_putchar(str[i]);
	}
	_putchar('\n');
}
