#include <stdio.h>

float F(int m);

int main()
{
    printf("Weight Of 5kg Mass is %fN",F(5));
    return 0;
}

float F(int m){
    float g = 9.8;
    float F = m * g;
    return F;
}