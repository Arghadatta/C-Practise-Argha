#include <stdio.h>

int main()
{
    //char str[3] = {'a', 'r', 'g'};
    char str_1[] = {'A', 'r', 'g', 'h', 'a', '\0'};
    char str_2[] = "Argha";
    char *ptr = str_1;

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%c", str[i]);
    // }

    while (*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }

    return 0;
}