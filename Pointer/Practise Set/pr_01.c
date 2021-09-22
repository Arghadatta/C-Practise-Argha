#include <stdio.h>

int main()
{
    int a = 50 , *a1;//Variable declaration
    a1 = &a;//pointer declaration
    printf("The address of Variable A is %u\n",&a);
    printf("The Value of Variable A is %d\n",*a1);

    return 0;
}
