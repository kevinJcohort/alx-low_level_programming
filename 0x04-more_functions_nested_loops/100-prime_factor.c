#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	long int input = 612852475143;
	int isPrime = true;
	int i;

	for (int i = sqrt(input); i > 1; i--)
	{
		printf("%d", i);
		if (input % i == 0)
		{
			isPrime = false;
		}
	}
	if (isPrime)
	{
		printf("%d\n");
	}
}
