#include "holberton.h"

/**
 * print_chessboard - prints the chess board
 * @a: pointer
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, g;

	i = 0;
	g = 0;
	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			g = i;
			_putchar('\n');
		}

		_putchar(a[i / 8][i - g]);
		i++;
	}
	_putchar('\n');
}
