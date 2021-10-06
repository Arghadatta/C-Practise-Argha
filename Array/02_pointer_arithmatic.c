#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    printf("Address is %u\n", ptr);
    ptr +=3 ; // or ptr++
    printf("Address is %u\n", ptr);

    return 0;
}