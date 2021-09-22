#include <stdio.h>

int addressFunc(int a){
    printf("The address of Variable I is %u\n", &a);
}

int main()
{
    int i;
    printf("The address of Variable I is %u\n", &i);
    addressFunc(i);
    return 0;
}


