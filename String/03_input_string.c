#include <stdio.h>

int main()
{
    char str_2[100];
    printf("Enter your name: ");
    gets(str_2);
    printf("Your name is %s",str_2);
    return 0;
}