#include "main.h"
/**
 * print_chessboard -  a function that prints the chessboard.
 * @a: 2d char of array
 * by ramzy
*/
void print_chessboard(char (*a)[8])
{
	int index_rows;
	int index_colums;

	for (index_rows = 0; index_rows < 8; index_rows++)
	{
		for (index_colums = 0; index_colums < 8; index_colums++)
		{
			_putchar(a[index_rows][index_colums]);
		}

		_putchar('\n');
	}
}
