#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 0
 */
void times_table(void)
{
	int a, b, mult;          /* mult represents multiplied figure */

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)

		{
			mult = a * b;
			if (b == 0)
			{
				_putchar(mult + '0');
			}
			else if (mult >= 10)
			{
				_putchar(' ');
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');

			}

			if (b != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
