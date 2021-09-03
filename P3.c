#include <stdio.h>

int main()
{
    char c;
    printf("Enter a Character\n");
    scanf("%c", &c);
    if (c <= 122 && c >= 97)
    {
        printf("Lowercase");
    }
    else
        printf("no");

    return 0;
}