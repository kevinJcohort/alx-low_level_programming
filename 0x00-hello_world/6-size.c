#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char TheCharacter;
    int TheInteger;
    long TheLong;
    long long TheLongLong;
    float Thefloat;

    // sizeof evaluates the size of a variable
    printf("Size of char: %zu bytes\n", sizeof(TheCharacter));
    printf("Size of int: %zu bytes\n", sizeof(TheInteger));
    printf("Size of long: %zu bytes\n", sizeof(TheLong));
    printf("Size of long long: %zu byte\n", sizeof(TheLongLong));
    
    return 0;
}