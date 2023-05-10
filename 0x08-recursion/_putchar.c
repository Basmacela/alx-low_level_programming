#include "main.h"
#include <unistd.h>
/**
 * _putchar - wtite the character c
 * @c: character to print
 * Return: success 1
*/
int_putchar(char c)
{
	return (write(1, &c, 1));
}

