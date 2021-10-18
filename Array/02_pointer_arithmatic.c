#include <stdio.h>

int main()
{
    int a = 1;
    int *ptr = &a;
    printf("Address is %u\n", ptr);
    //ptr +=3 ; // or ptr++
    // printf("Address is %u\n", ptr);

    int add;
    add = (ptr + a);
    printf("%d",add);

    return 0;
}