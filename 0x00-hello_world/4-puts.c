#include<stdio.h>
int main()
{
    char Mystr[] = "The puts() function";

    int val = puts(Mystr);
    printf("Returned Value Val = %d", val);

    return 0;
}