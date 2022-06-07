#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * Return: 1 is successful
 * otherwise return 0
 *
 * @c: input
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
