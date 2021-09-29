#include <stdio.h>

int main()
{
    int a = 20;
    int *ptr = &a;

    printf("The Value of Ptr is %u\n", ptr);
    // ptr++;
    // ptr--;
    // ptr++;
    // ptr++;
    // ptr++;
    printf("The Value of Ptr After Increment is %u\n", ptr);
    return 0;
}