#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i, j;
	for (i = 0;*dest != '\0'; i++);
	for (j=0; *src != '\0'; j++)
		dest[i+j] = src[j];
		dest[i=j] = '\0';
		
		return dest;
}
