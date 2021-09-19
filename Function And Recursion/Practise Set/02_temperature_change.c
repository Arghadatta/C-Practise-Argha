#include <stdio.h>

float tempCtoF(int c);

int main()
{
    printf("The F is %fF", tempCtoF(5));
    return 0;
}

float tempCtoF(int c){
    float F;
    F = (c * 9/5) + 32;
    return F;
}