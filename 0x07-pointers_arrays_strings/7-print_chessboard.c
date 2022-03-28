#include "main.h"

/**
 * print_chessboard - prints out a chessboard
 * @a: input pointer, 2d array of chars
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, m = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			m = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n')
}
