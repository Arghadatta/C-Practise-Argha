#include <stdio.h>

int main()
{
    int num1, num2, num3;
    FILE *test, *test2, *test3, *test4;
    test4 = fopen("Generated.txt", "r");
    // char hold = fgetc(test3);
    // printf("%c",hold);
    // fclose(test3);
    char c;
    c = fgetc(test4);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(test4);
    }
    fclose(test4);

    return 0;
}