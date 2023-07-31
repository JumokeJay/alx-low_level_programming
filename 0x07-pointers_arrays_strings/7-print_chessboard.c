#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - funrtion to print chessboard
 * @a: the board
 * Result: the result of the code
 */

void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; ++i)
	{
	for (int j = 0; j < 8; ++j)
	{
	printf("%c ", a[i][j]);
	}
	printf("\n");
	}
}
