#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Thecharacter;
	int Theinteger;
	long Thelong;
	long long Thelonglong;
	float Thefloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(Tcharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(Tinteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(Tlong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(Tlonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(Tfloat));

	return (0);
}
