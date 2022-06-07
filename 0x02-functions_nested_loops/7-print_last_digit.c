#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: integer
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = (n % 10) * -1;

	else
		n = n % 10;

	_putchar(n + '0');
	return (n);
}
