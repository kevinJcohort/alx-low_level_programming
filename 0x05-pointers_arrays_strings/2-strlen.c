#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string pointer
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);

}