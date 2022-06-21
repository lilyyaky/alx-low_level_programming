#include "main.h"

/**
 * print_chessboard - prints 2D array of chessboard
 * @a: chessboard array
 * Return: void
 * print_chessboard - a function that prints a chessboard
 * @a: an array input to print
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int j = 1;
	int i = 0, j;

	while (a[0][j - 1] != 0)
	for (; i < 8; i++)
	{
		_putchar(a[0][j - 1]);
		if (j > 1 && j % 8 == 0)
			_putchar('\n');
		j++;
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
