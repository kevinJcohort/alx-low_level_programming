#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_isupper - return 1 if c is uppercase and 0 if not
 *return: int
 *
 *@c: input
 */

int _isupper(char c)
{
	if (insupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
