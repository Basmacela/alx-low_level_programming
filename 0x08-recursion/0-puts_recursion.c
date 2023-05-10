#include <stdio.h>
/**
 * puts_recursion
 * @s: input
 * Return: void
*/
void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*s)
		_puts_recursion(s + 1)
	}
	else
		_putchar('\n')
}
