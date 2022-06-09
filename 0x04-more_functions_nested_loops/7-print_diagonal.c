#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of time \\ should be printed
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('\\');
		}

		_putchar('\n');
	}
}