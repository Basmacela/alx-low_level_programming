#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: pointer
 * Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i, g;

	for (i = 0; i < 8; i++)
	{
		for (g = 0; g < 8; g++)
		{
			_putchar(a[i][g]);
		}
			_putchar('\n');
	}
}
